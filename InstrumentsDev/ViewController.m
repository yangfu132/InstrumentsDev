//
//  ViewController.m
//  InstrumentsDev
//
//  Created by szzc on 2017/3/2.
//  Copyright © 2017年 szzc. All rights reserved.
//

#import "ViewController.h"

#import <objc/runtime.h>

#import "InstrumentsPrivateHeader.h"

#import "IMPFTTraceDocument.h"

#import "math.h"

#define CODE_TEST 0

#define NSPrint(format, ...) CFShow((__bridge CFStringRef)[NSString stringWithFormat:format, ## __VA_ARGS__])


@interface ViewController()
{
    XRAnalysisCoreStandardController *_coreController;
    
    IMPFTTraceDocument* _document;
    
    XRAnalysisCoreDetailViewController* _detailController;
    
    XRAnalysisCoreCallTreeViewController* _treeController;
    
    XRAnalysisCoreTableViewController* _tableController;
    
    XRAnalysisCoreTableViewController* _tableControllerBack;
    
    PFTWindowController* _windowControllerBack;
    
    NSMutableArray* _arrayTable;
    
    NSTableView* _tableBack;
    
    XRCallTreeDetailView* _treeBack;
    
    NSTableView* _funcSampleTable;
    
    PFTTableDetailView* _wifiSampleTable;
    
}
@property (strong) IBOutlet PFTDocumentController* pftController;
@property (weak) IBOutlet NSTableView* tableView;
@end

@interface ViewController(TableView)<NSTableViewDelegate,NSTableViewDataSource>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    // Do any additional setup after loading the view.
}


- (void)setRepresentedObject:(id)representedObject {
    [super setRepresentedObject:representedObject];

    // Update the view, if already loaded.
}


@end
