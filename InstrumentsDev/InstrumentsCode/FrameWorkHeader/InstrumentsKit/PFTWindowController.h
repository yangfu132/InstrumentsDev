//
//  PFTWindowController.h
//  MacDemoNew
//
//  Created by yangfl on 2017/1/9.
//  Copyright © 2017年 szzc. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
@interface PFTWindowController : NSObject

@end
*/

/*
@interface PFTWindowController : NSWindowController <NSWindowDelegate, XRContextContainer, DTTimelineGraphDelegate, XRLazyKVOResponder>
{
    BOOL _strategyToolbarOpen;
    BOOL _inTimeSelectionGesture;
    XRCallTreeCompareBarViewController *_callTreeCompareBarViewController;
    NSMapTable *_observationsByContextByObj;
    NSMutableDictionary *_strategyUIControllersByIdentifier;
    XRLazyKVOAdapter *_observationAdapter;
    DTTimelineDecoratedPlane *_flagPlane;
    DTTimelineDecoratedPlane *_inspectionHeadPlane;
    XRFlagDecorator *_flagDecorator;
    XRInspectionHeadDecorator *_inspectionHeadDecorator;
    DTTimelineGroupPlane *_rulerGroupPlane;
    NSMutableDictionary *_archivedStrategyStateByID;
    BOOL _somethingNeedsRefresh;
    BOOL _trackNeedsRefresh;
    BOOL _strategiesNeedRefresh;
    BOOL _strategyToolbarChanged;
    BOOL _detailContextChanged;
    BOOL _flagsNeedRefresh;
    BOOL _windowLayoutNeedsRefresh;
    BOOL _inspectionChanged;
    XRContext *_consoleContext;
    id _keyFlagMonitor;
    NSView *_controlBarView;
    NSView *_inspectorChooserView;
    NSTabView *_inspectorDataViewer;
    XRTimelineGraph *_timelineGraph;
    PFTDataViewer *_instrumentConfigurator;
    PFTDataViewer *_instrumentInspector;
    PFTDataViewer *_eventInspector;
    PFTLegacySearchTokenTextField *_detailSearchField;
    PFTDetailTypeHostView *_detailHost;
    NSView *_navigationView;
    XRContextPathControl *_contextPathControl;
    XRContext *_rootContext;
    XRMainWindowUIState *_state;
    XRRecordingOptionsViewController *_recordingOptionsViewController;
    NSSet *_currentStrategyIdentifiers;
    id <XRToolbarManager> _toolbarManager;
    XRStrategiesToolbarViewController *_strategiesToolbarViewController;
    XRPlaceholderView *_strategyToolbarHost;
    NSView *_normalContentView;
    NSLayoutConstraint *_strategyToolbarHeightConstraint;
    DVTBorderedView *_belowToolbarBorderedView;
    PFTSelectedEventDataElementList *_extendedDetailModel;
    XRSummaryViewController *_summaryViewController;
    XRModalViewController *_windowContentController;
    NSViewController *_interactiveUIController;
    XRNonInteractiveModeViewController *_nonInteractiveUIController;
    NSViewController *_trackViewController;
    NSViewController *_detailViewController;
    NSView *_lhsDetailView;
    NSViewController *_lhsDetailViewController;
    PFTDataViewer *_rhsDetailView;
    NSViewController *_rhsDetailViewController;
    XRConsoleControl *_consoleView;
    XRTrackAndDetailSplitViewController *_trackDetailSplitViewController;
    NSSplitViewController *_detailSplitViewController;
    XRLibraryPopoverViewController *_libraryPopoverViewController;
}

@property(retain, nonatomic) XRLibraryPopoverViewController *libraryPopoverViewController; // @synthesize libraryPopoverViewController=_libraryPopoverViewController;
@property(readonly, nonatomic) NSSplitViewController *detailSplitViewController; // @synthesize detailSplitViewController=_detailSplitViewController;
@property(readonly, nonatomic) XRTrackAndDetailSplitViewController *trackDetailSplitViewController; // @synthesize trackDetailSplitViewController=_trackDetailSplitViewController;
@property(retain, nonatomic) XRConsoleControl *consoleView; // @synthesize consoleView=_consoleView;
@property(readonly, nonatomic) NSViewController *rhsDetailViewController; // @synthesize rhsDetailViewController=_rhsDetailViewController;
@property(retain, nonatomic) PFTDataViewer *rhsDetailView; // @synthesize rhsDetailView=_rhsDetailView;
@property(readonly, nonatomic) NSViewController *lhsDetailViewController; // @synthesize lhsDetailViewController=_lhsDetailViewController;
@property(retain, nonatomic) NSView *lhsDetailView; // @synthesize lhsDetailView=_lhsDetailView;
@property(readonly, nonatomic) NSViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(readonly, nonatomic) NSViewController *trackViewController; // @synthesize trackViewController=_trackViewController;
@property(readonly, nonatomic) XRNonInteractiveModeViewController *nonInteractiveUIController; // @synthesize nonInteractiveUIController=_nonInteractiveUIController;
@property(readonly, nonatomic) NSViewController *interactiveUIController; // @synthesize interactiveUIController=_interactiveUIController;
@property(readonly, nonatomic) XRModalViewController *windowContentController; // @synthesize windowContentController=_windowContentController;
@property(readonly, nonatomic) XRSummaryViewController *summaryViewController; // @synthesize summaryViewController=_summaryViewController;
@property(readonly) PFTSelectedEventDataElementList *extendedDetailModel; // @synthesize extendedDetailModel=_extendedDetailModel;
@property __weak DVTBorderedView *belowToolbarBorderedView; // @synthesize belowToolbarBorderedView=_belowToolbarBorderedView;
@property __weak NSLayoutConstraint *strategyToolbarHeightConstraint; // @synthesize strategyToolbarHeightConstraint=_strategyToolbarHeightConstraint;
@property(retain) NSView *normalContentView; // @synthesize normalContentView=_normalContentView;
@property __weak XRPlaceholderView *strategyToolbarHost; // @synthesize strategyToolbarHost=_strategyToolbarHost;
@property(retain, nonatomic) XRStrategiesToolbarViewController *strategiesToolbarViewController; // @synthesize strategiesToolbarViewController=_strategiesToolbarViewController;
@property(retain, nonatomic) id <XRToolbarManager> toolbarManager; // @synthesize toolbarManager=_toolbarManager;
@property(retain, nonatomic) NSSet *currentStrategyIdentifiers; // @synthesize currentStrategyIdentifiers=_currentStrategyIdentifiers;
@property(retain, nonatomic) XRRecordingOptionsViewController *recordingOptionsViewController; // @synthesize recordingOptionsViewController=_recordingOptionsViewController;
@property(copy, nonatomic) XRMainWindowUIState *state; // @synthesize state=_state;
@property(retain) XRContext *rootContext; // @synthesize rootContext=_rootContext;
@property __weak XRContextPathControl *contextPathControl; // @synthesize contextPathControl=_contextPathControl;
@property __weak NSView *navigationView; // @synthesize navigationView=_navigationView;
@property __weak PFTDetailTypeHostView *detailHost; // @synthesize detailHost=_detailHost;
@property __weak PFTLegacySearchTokenTextField *detailSearchField; // @synthesize detailSearchField=_detailSearchField;
@property(retain) PFTDataViewer *eventInspector; // @synthesize eventInspector=_eventInspector;
@property(retain) PFTDataViewer *instrumentInspector; // @synthesize instrumentInspector=_instrumentInspector;
@property(retain) PFTDataViewer *instrumentConfigurator; // @synthesize instrumentConfigurator=_instrumentConfigurator;
@property(retain) XRTimelineGraph *timelineGraph; // @synthesize timelineGraph=_timelineGraph;
@property(nonatomic) __weak NSTabView *inspectorDataViewer; // @synthesize inspectorDataViewer=_inspectorDataViewer;
@property(nonatomic) __weak NSView *inspectorChooserView; // @synthesize inspectorChooserView=_inspectorChooserView;
@property(nonatomic) __weak NSView *controlBarView; // @synthesize controlBarView=_controlBarView;
@property(readonly, nonatomic) NSMutableDictionary *strategyUIControllersByIdentifier; // @synthesize strategyUIControllersByIdentifier=_strategyUIControllersByIdentifier;
- (void).cxx_destruct;
- (void)handleLazyKVOUpdate:(id)arg1;
- (void)_refreshPass;
- (BOOL)windowShouldClose:(id)arg1;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)setupToolbar;
- (void)restoreStrategyUIControllerStates:(id)arg1;
- (id)archiveStrategyUIControllerStates;
- (void)unhideStrategyToolbarForWatermark;
- (void)hideStrategyToolbarForWatermark;
- (void)setStrategySummaryFilter:(id)arg1;
- (void)setStrategyToolbarVisible:(BOOL)arg1;
- (void)documentDidUpdateFilterForRunNumber:(long long)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)summaryViewContext;
- (void)callTreeMine:(id)arg1;
- (void)toggleExtendedDetail:(id)arg1;
- (void)performFindPanelAction:(id)arg1;
- (void)setSidebarState:(unsigned long long)arg1;
- (void)closeDetailView;
- (void)openDetailView;
- (id)searchCriteria;
- (void)toggleDetail:(id)arg1;
- (void)addCriteriaToSearchField:(id)arg1;
- (void)_openDataView;
- (id)iconForContext:(id)arg1;
- (id)contextContainerForUUID:(id)arg1;
- (id)viewForContext:(id)arg1;
- (id)siblingsForContext:(id)arg1;
- (id)splitterContext;
- (void)_respondToDisplayedContextChange;
- (void)displayContext:(id)arg1;
- (id)contextRepresentation;
- (id)uuid;
- (id)strategyDetailsContext;
- (void)inspectFlag:(id)arg1;
- (void)removeFlag:(id)arg1;
- (void)addFlagToRecording:(id)arg1;
- (void)nextFlag:(id)arg1;
- (void)prevFlag:(id)arg1;
- (id)_inspectionCursor;
- (void)_coreSpaceNotification:(id)arg1;
- (void)setSelection:(id)arg1 strategy:(struct NSString *)arg2;
- (id)_selectedStrategyUI;
- (void)inputHandlerForGraph:(id)arg1 requestsHeight:(double)arg2 forPlane:(id)arg3;
- (void)inputHandlerForGraph:(id)arg1 requestsCollapsingGroupPlane:(id)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsExpandingGroupPlane:(id)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsEndLongPressDragAtTime:(unsigned long long)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsLongPressDragToTime:(unsigned long long)arg2;
- (BOOL)inputHandlerForGraph:(id)arg1 requestsLongPressDragBeginAtTime:(unsigned long long)arg2 onPlanes:(id)arg3;
- (void)inputHandlerForGraph:(id)arg1 unhandledClickAtTime:(unsigned long long)arg2 clickCount:(long long)arg3 onPlanes:(id)arg4;
- (void)inputHandlerRequestsToClearCurrentInspectionTimeForGraph:(id)arg1;
- (void)inputHandlerRequestsToClearInspectionInfoForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsNanosecondsPerPoint:(unsigned long long)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsCurrentInspectionTime:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearSelectedTimeRangeForGraph:(id)arg1;
- (void)inputHandlerDidFinishSelectionForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsSelectedTimeRange:(struct XRTimeRange)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestYOffset:(double)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsNanosecondOffset:(long long)arg2;
- (void)toggleLibrary:(id)arg1;
- (id)_libraryButton;
- (void)recordOptions:(id)arg1;
- (void)deleteRun:(id)arg1;
- (void)deleteInstrument:(id)arg1;
- (void)editInstrument:(id)arg1;
- (void)_editInstrumentInstance:(id)arg1;
- (id)_modalEditorViewControllerForDataElement:(id)arg1 instrument:(id)arg2;
- (void)showExtendedDetail:(id)arg1;
- (void)showDisplaySettings:(id)arg1;
- (void)showRecordSettings:(id)arg1;
- (void)callTreeCompare:(id)arg1;
- (void)fullScreenAction:(id)arg1;
- (void)zoomOut:(id)arg1;
- (void)zoomIn:(id)arg1;
- (void)snapTrackViewToFit:(id)arg1;
- (void)recordTrace:(id)arg1;
@property(readonly) unsigned long long scaleNeededForSnapTrackViewToFit;
@property(readonly, nonatomic) __weak PFTTraceDocument *traceDocument;
- (void)windowWillClose:(id)arg1;
- (void)setDocument:(id)arg1;
- (BOOL)shouldCloseDocument;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;
- (id)_touchBarController;
- (id)makeTouchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
*/
