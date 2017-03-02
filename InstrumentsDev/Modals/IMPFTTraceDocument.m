//
//  IMPFTTraceDocument.m
//  MacDemoNew
//
//  Created by yangfl on 2017/1/3.
//  Copyright © 2017年 szzc. All rights reserved.
//

#import "IMPFTTraceDocument.h"
#import <objc/runtime.h>

@implementation IMPFTTraceDocument

- (instancetype) init
{
    return [super init];
}

/*
- (NSString *)windowNibName {
    // Override returning the nib file name of the document
    // If you need to use a subclass of NSWindowController or if your document supports multiple NSWindowControllers, you should remove this method and override -makeWindowControllers instead.
    return <#nibName#>;
}
*/

- (void) createTrace:(XRTrace *)trace
{
    for (XRInstrument *instrument in trace.basicInstruments.allInstruments) {
        
        // You can have multiple runs for each instrument.
        for (XRRun *run in instrument.allRuns)
        {
            //                if ([run isKindOfClass:[XRSamplerRun class]] )
            
        }//endf
        
    }//endf
}


- (BOOL)readFromURL:(NSURL *)url ofType:(NSString *)typeName error:(NSError * _Nullable *)outError
{
    Ivar demoIvar = class_getInstanceVariable([IMPFTTraceDocument class], "_trace");
    //    object_setIvar(self, demoIvar, trace);
    XRTrace *trace = object_getIvar(self, demoIvar);
    
    NSError *error;
    [trace loadDocument:[NSURL fileURLWithPath:@"/Users/szzc/Desktop/test.trace"] error:&error];
    if (!error)
    {
        [trace awakeFromTemplate];
    }
    
    [trace setOwner:self];
    [self createTrace:trace];
//    Ivar demoIvar = class_getInstanceVariable([IMPFTTraceDocument class], "_trace");
//    object_setIvar(self, demoIvar, trace);
//    id object = object_getIvar(self, demoIvar);
 
//    [trace addObserver:self forKeyPath:@"workTracker.totalNumberOfWorkItems" options:0x3 context:0x0];
//    [r13 addObserver:r13 forKeyPath:@"selectedRunNumber" options:0x3 context:0x0];
//    [trace addObserver:self forKeyPath:@"strategyManager.presentStrategies" options:0x0 context:nil/*_XRStrategyChangedContext*/];
    
    return YES;
//    return [super readFromURL:url ofType:typeName error:outError];
}

- (void)windowControllerDidLoadNib:(NSWindowController *)aController {
    [super windowControllerDidLoadNib:aController];
    // Add any code here that needs to be executed once the windowController has loaded the document's window.
}

- (NSData *)dataOfType:(NSString *)typeName error:(NSError **)outError {
    // Insert code here to write your document to data of the specified type. If outError != NULL, ensure that you create and set an appropriate error when returning nil.
    // You can also choose to override -fileWrapperOfType:error:, -writeToURL:ofType:error:, or -writeToURL:ofType:forSaveOperation:originalContentsURL:error: instead.
    if (outError) {
        *outError = [NSError errorWithDomain:NSOSStatusErrorDomain code:unimpErr userInfo:nil];
    }
    return nil;
}

- (BOOL)readFromData:(NSData *)data ofType:(NSString *)typeName error:(NSError **)outError {
    // Insert code here to read your document from the given data of the specified type. If outError != NULL, ensure that you create and set an appropriate error when returning NO.
    // You can also choose to override -readFromFileWrapper:ofType:error: or -readFromURL:ofType:error: instead.
    // If you override either of these, you should also override -isEntireFileLoaded to return NO if the contents are lazily loaded.
    if (outError) {
        *outError = [NSError errorWithDomain:NSOSStatusErrorDomain code:unimpErr userInfo:nil];
    }
    return NO;
}

+ (BOOL)autosavesInPlace {
    return YES;
}

@end
