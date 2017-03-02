//
//  IDMCoreDetailModal.m
//  InstrumentsDev
//
//  Created by szzc on 2017/3/2.
//  Copyright © 2017年 szzc. All rights reserved.
//

#import "IDMCoreDetailModal.h"
#import "InstrumentsPrivateHeader.h"
#import "IMPFTTraceDocument.h"
#import "math.h"
#import <objc/runtime.h>

#define NSPrint(format, ...) CFShow((__bridge CFStringRef)[NSString stringWithFormat:format, ## __VA_ARGS__])

@interface IDMCoreDetailModal()
{
    NSString* _strTracePath;
    
    XRAnalysisCoreStandardController *_coreController;
    
    IMPFTTraceDocument* _document;
    
    XRAnalysisCoreCallTreeViewController* _treeController;
}
@end


@implementation IDMCoreDetailModal

- (void) mainDemo
{
    _strTracePath = [[NSBundle mainBundle] pathForResource:@"traceData" ofType:@"trace"];
    [self initInstruments];
    
    [self createDocument];
}

- (void) initInstruments
{
    // Required. Each instrument is a plugin and we have to load them before we can process their data.
    DVTInitializeSharedFrameworks();
    [DVTDeveloperPaths initializeApplicationDirectoryName:@"Instruments"];
    [XRInternalizedSettingsStore configureWithAdditionalURLs:nil];
    PFTLoadPlugins();
}

- (void) createDocument
{
    NSError* error = [NSError alloc];
    NSURL* urlTrace = [NSURL URLWithString:_strTracePath];
    _document = [[IMPFTTraceDocument alloc] initWithContentsOfURL:urlTrace
                                                           ofType:@"Trace Document"
                                                            error:&error];
    
    Ivar demoIvar = class_getInstanceVariable([IMPFTTraceDocument class], "_trace");
    //object_setIvar(run, demoIvar, theRepository);
    XRTrace *trace = object_getIvar(_document, demoIvar);
    PFTInstrumentList* instrumentList = trace.basicInstruments;
    for (XRInstrument *instrument in instrumentList.allInstruments) {
        [self createCoreController:_document instrument:instrument];
    }//endf
}

- (void) createCoreController:(IMPFTTraceDocument *)document instrument:(XRInstrument *)instrument
{
    if (!_coreController)
    {
        _coreController = [[XRAnalysisCoreStandardController alloc] initWithInstrument:instrument document:document];
        [instrument setViewController:_coreController];
    }
    //esle cont.
    
    Ivar demoIvar = class_getInstanceVariable([XRAnalysisCoreStandardController class], "_detailController");
    //    object_setIvar(coreController, demoIvar, _detailController);
    _detailController = object_getIvar(_coreController, demoIvar);
}

- (void) showCallTreeController:(XRAnalysisCoreDetailViewController* )theDetailController
{
    if (!_treeController)
    {
        Ivar demoIvar = class_getInstanceVariable([XRAnalysisCoreDetailViewController class], "_callTreeViewController");
        //    object_setIvar(coreController, demoIvar, _detailController);
        _treeController = object_getIvar(theDetailController, demoIvar);
        
    }
    
    if (_treeController)
    {
        [self loadMultiProcessBacktrace:_treeController];
    }
    //else cont.
}


- (void) loadMultiProcessBacktrace:(XRAnalysisCoreCallTreeViewController*)treeController
{
    Ivar demoIvar = class_getInstanceVariable([XRAnalysisCoreCallTreeViewController class], "_backtraceRepository");
    //    object_setIvar(coreController, demoIvar, _detailController);
    XRMultiProcessBacktraceRepository* theRepository = object_getIvar(treeController, demoIvar);
    if (theRepository)
    {
        static NSMutableArray * (^ const flattenTree)(PFTCallTreeNode *) = ^(PFTCallTreeNode *rootNode) {
            NSMutableArray *nodes = [NSMutableArray array];
            if (rootNode) {
                [nodes addObject:rootNode];
                for (PFTCallTreeNode *node in rootNode.children) {
                    [nodes addObjectsFromArray:flattenTree(node)];
                }
            }
            return nodes;
        };
        
        NSMutableArray *nodes = flattenTree(theRepository.rootNode);
        [nodes sortUsingDescriptors:@[[NSSortDescriptor sortDescriptorWithKey:NSStringFromSelector(@selector(terminals)) ascending:NO]]];
        for (PFTCallTreeNode *node in nodes) {
            // See the header file for more information about properties of nodes.
            NSPrint(@"%@ %@ %i ms", node.libraryName, node.symbolName, node.terminals);
            
            //_terminalSamplesByKeyAddress
            Ivar demoIvar = class_getInstanceVariable([PFTCallTreeNode class], "_terminalSamplesByKeyAddress");
            //    object_setIvar(coreController, demoIvar, _detailController);
            NSDictionary* _terminalSamplesByKeyAddress = object_getIvar(node, demoIvar);
            if (_terminalSamplesByKeyAddress)
            {
                
            }
        }//endf
        
    }
    //else cont.
}

@end
