//
//  XRAnalysisCoreDetailViewController.h
//  MacDemoNew
//
//  Created by yangfl on 2017/1/4.
//  Copyright © 2017年 szzc. All rights reserved.
//

#import <Cocoa/Cocoa.h>
/*
@interface XRAnalysisCoreDetailViewController : UIViewController

@end
*/

/*
@interface XRAnalysisCoreDetailViewController : NSViewController <XRLazyKVOResponder, XRAnalysisCoreCallTreeViewControllerDelegate, XRAnalysisCoreTableViewControllerDelegate, XRAnalysisCoreViewSubcontroller>
{
    XRAnalysisCoreDetailNode *_displayedNode;   //Profile,Narrative,Samples
    XRAnalysisCoreDetailNode *_firstNode;
    NSMutableDictionary *_displayedStateByNodeName;
    NSArray *_currentContextChangeOps;
    NSTimer *_animationDelayTimer;
    XREngineeringTypeFormatter *_myEngFormatter;
    BOOL _viewsInTransition;
    BOOL _instrumentInvalid;
    XRLazyKVOAdapter *_kvoAdapter;
    XRModalViewController *_modalController;
    XRDetailViewFatalErrorViewController *_fatalErrorViewController;
    XRAnalysisCoreTableViewController *_tabularViewController;
    XRAnalysisCoreProjectionViewController *_projectionViewController;
    XRAnalysisCoreCallTreeViewController *_callTreeViewController;
    id <XRAnalysisCoreDetailViewControllerDelegate> _delegate;
    XRAnalysisCoreUIPlan *_plan;
    PFTTraceDocument *_traceDocument;
    long long _runNumber;
    XRInstrument *_instrument;
    XRStrategyContextObject *_strategyContext;
    NSScrollView *_tableScrollView;
}

@property(retain) NSScrollView *tableScrollView; // @synthesize tableScrollView=_tableScrollView;
@property(retain, nonatomic) XRStrategyContextObject *strategyContext; // @synthesize strategyContext=_strategyContext;
@property(nonatomic) __weak XRInstrument *instrument; // @synthesize instrument=_instrument;
@property(nonatomic) long long runNumber; // @synthesize runNumber=_runNumber;
@property(nonatomic) __weak PFTTraceDocument *traceDocument; // @synthesize traceDocument=_traceDocument;
@property(retain, nonatomic) XRAnalysisCoreUIPlan *plan; // @synthesize plan=_plan;
@property(nonatomic) __weak id <XRAnalysisCoreDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)filterDetailWithTokens:(id)arg1 context:(id)arg2 matchesAny:(BOOL)arg3;
- (id)selectedSearchContext;
- (id)searchContexts;
- (void)refineQueryBasedOnUIState:(id)arg1;
- (void)callTreeViewControllerDidUpdateContext:(id)arg1;
- (void)callTreeViewControllerWillUpdateContext:(id)arg1;
- (id)currentCallTreeFilter;
- (void)restoreDisplayStateFromTemplate:(id)arg1;
- (id)savedDisplayStateForTemplates;
- (void)focus:(id)arg1;
- (unsigned int)_tableIDForSpec:(id)arg1 runNumber:(long long)arg2;
- (void)clearCurrentDataContext;
- (id)currentDataContext;
- (id)_currentOutlineExtendedDetailMetaUI;
- (void)handleLazyKVOUpdate:(id)arg1;
- (id)currentRecordSettingsDetailMetaUI;
- (id)currentDisplaySettingsDetailMetaUI;
- (id)currentExtendedDetailMetaUI;
- (void)instrumentDidChangeTableRequirements;
- (void)instrumentDidChangeSwitches;
- (void)tableViewController:(id)arg1 selectedAndEventAtTime:(unsigned long long)arg2;
- (void)documentSetInspectionTime:(unsigned long long)arg1;
- (void)documentDidUpdateFilter;
- (void)displayContext:(id)arg1;
- (unsigned long long)_validateNodeForCurrentImplementation:(id)arg1;
- (void)_afterRebuildingUIPerformBlock:(CDUnknownBlockType)arg1;
- (id)siblingsForContext:(id)arg1;
- (id)contextRepresentation;
- (id)viewForContext:(id)arg1;
- (id)uuid;
- (void)_detailFadeOut:(id)arg1;
- (void)_setCurrentViewChangeOps:(id)arg1;
- (void)eventHorizonAdvancedThroughRange:(struct XRTimeRange)arg1;
- (void)viewDidAppear;
- (void)loadView;
- (void)dealloc;
- (void)instrumentWillBecomeInvalid;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
*/
