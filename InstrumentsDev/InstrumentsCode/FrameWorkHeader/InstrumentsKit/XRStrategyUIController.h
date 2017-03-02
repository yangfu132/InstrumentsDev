//
//  XRStrategyUIController.h
//  MacDemoNew
//
//  Created by yangfl on 2016/12/30.
//  Copyright © 2016年 szzc. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
@interface XRStrategyUIController : NSObject

@end
*/

/*
__attribute__((visibility("hidden")))
@interface XRStrategyUIController : NSResponder <XRAnalysisCoreDetailViewControllerDelegate, XRLazyKVOResponder, NSDraggingDestination>
{
    PFTTraceDocument *_traceDocument;
    BOOL _needsRefresh;
    BOOL _checkedForCommonDetailView;
    struct XRTimeRange _lastSeenSelectedTimeRange;
    unsigned long long _lastSeenInspectionTime;
    XRStrategyUIInspector *_activeInspector;
    unsigned long long _inspectionType;
    XRLazyKVOAdapter *_kvoAdapter;
    XRTimeFlag *_draggingFlag;
    NSView *_lentView;
    XRContext *_lentContext;
    XRAnalysisCoreDetailViewController *__commonDetailViewController;
    XRStrategyUIHighlightingController *_highlightingController;
    DTTimelineGraph *_timelineGraph;
    PFTDetailTypeHostView *_detailHostView;
    PFTSelectedEventDataElementList *_extendedDetailModel;
    unsigned long long _resolution;
    XRStrategyUIControllerState *_state;
}

+ (id)_createDetailViewController;
+ (id)_defaultState;
@property(copy, nonatomic) XRStrategyUIControllerState *state; // @synthesize state=_state;
@property(nonatomic) unsigned long long resolution; // @synthesize resolution=_resolution;
@property(readonly, nonatomic) XRStrategyUIInspector *activeInspector; // @synthesize activeInspector=_activeInspector;
@property(nonatomic) __weak PFTSelectedEventDataElementList *extendedDetailModel; // @synthesize extendedDetailModel=_extendedDetailModel;
@property(nonatomic) __weak PFTDetailTypeHostView *detailHostView; // @synthesize detailHostView=_detailHostView;
@property(nonatomic) __weak DTTimelineGraph *timelineGraph; // @synthesize timelineGraph=_timelineGraph;
- (void).cxx_destruct;
- (void)detailViewController:(id)arg1 didUpdateExtendedDetail:(id)arg2;
- (id)_currentSelectionContext:(id)arg1 container:(id)arg2;
- (void)_takeControlOfDetailView;
- (id)_commonDetailViewController;
- (BOOL)_wantsPeriodicDraggingUpdates;
- (void)_draggingEnded:(id)arg1;
- (void)_concludeDragOperation:(id)arg1;
- (BOOL)_performDragOperation:(id)arg1;
- (BOOL)_prepareForDragOperation:(id)arg1;
- (void)_draggingExited:(id)arg1;
- (unsigned long long)_draggingUpdated:(id)arg1;
- (unsigned long long)_draggingEntered:(id)arg1;
- (void)_setDeckUnits:(long long)arg1 forRepresentedObject:(id)arg2;
- (void)_collapseRepresentedObject:(id)arg1;
- (void)_expandRepresentedObject:(id)arg1;
- (void)_resetBottomPlane;
- (void)_replaceOldState:(id)arg1 withState:(id)arg2;
- (void)_bindingProblemSolved;
- (BOOL)_resolution:(unsigned long long)arg1 differsFrom:(unsigned long long)arg2;
- (void)_resolutionDidChange;
- (void)_populateExtendedDetailModel;
- (BOOL)_supportsSelection;
- (void)_addFilterToNavigator:(id)arg1 planes:(id)arg2;
- (void)_selectionDetailContextChanged;
- (void)_brushStylesChanged;
- (id)_planeForRoute:(id)arg1 representedObject:(id)arg2;
- (id)_planForRunNumber:(long long)arg1;
- (void)_finalShutdownHandler;
- (void)_eventHorizonAdvancedThroughRange:(struct XRTimeRange)arg1;
- (void)_inspectionTimeIs:(unsigned long long)arg1;
- (void)_documentUpdateFilterForRunNumber:(long long)arg1;
- (id)_currentSelectionFilteredDataSource;
- (id)_currentSelectionIcon;
- (void)_handleConsolidatedModelRefresh;
- (void)_refreshModelCB;
- (void)didSetInspectionTime:(unsigned long long)arg1;
- (void)didChangeUpdateFilterForRunNumber:(long long)arg1;
- (id)strategyControllerIdentifierRequired;
- (id)strategyRootContext;
- (id)selectionIcon;
- (id)selectionDetailsFilteredDataSource;
- (id)selectionDetailContext;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)selectNextEvent:(id)arg1;
- (void)selectPreviousEvent:(id)arg1;
- (void)selectNextInstrument:(id)arg1;
- (void)selectPreviousInstrument:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)shutdown;
- (id)dataElementsForModalEditor;
- (void)resetDetailHostView;
- (void)expireLoanedDetailArea;
- (void)lendDetailAreaToView:(id)arg1 context:(id)arg2;
- (void)setDeckUnits:(long long)arg1 forPlane:(id)arg2;
- (void)runStarted;
- (void)collapsePlane:(id)arg1;
- (void)expandPlane:(id)arg1;
- (void)closeActiveInspector;
- (void)highlightWalkClickAtTime:(unsigned long long)arg1 planes:(id)arg2;
- (void)_updateOverlayPlaneAfterModelChange;
- (id)planesForOverlayToMonitor;
- (void)_createConnectionsIntervalDecoratorForRunNumber:(long long)arg1;
- (void)_clearConnectionsDecorator;
- (void)inspectionClickAtTime:(unsigned long long)arg1 planes:(id)arg2;
- (void)endFlagDragAtTime:(unsigned long long)arg1;
- (void)dragFlagToTime:(unsigned long long)arg1;
- (BOOL)beginFlagDragAtTime:(unsigned long long)arg1;
- (void)flagInspectionStartingAtFlag:(id)arg1;
- (void)flagInspectionClickAtTime:(unsigned long long)arg1;
- (void)_inspectFlag:(id)arg1 time:(unsigned long long)arg2;
- (void)_startNewWalkSession:(id)arg1 afterOperation:(id)arg2;
- (void)_startNewNavigationSession:(id)arg1 afterOperation:(id)arg2;
- (void)_placeInspector:(id)arg1 options:(unsigned long long)arg2;
- (void)eventHorizonAdvancedThroughRange:(struct XRTimeRange)arg1;
- (void)_scrollSelectionIntoView;
- (id)selectedRunPlan;
- (id)strategyControllerForRunIdentifier:(int)arg1;
- (void)selectSummaryFilter:(id)arg1;
- (id)legend;
- (id)styleViews;
- (id)filterViews;
- (id)displayName;
- (id)model;
- (void)handleLazyKVOUpdate:(id)arg1;
- (id)_planesWithValue:(id)arg1 forKey:(id)arg2;
- (void)timelineGraphDidLayoutWithState:(id)arg1;
- (void)_restoreHighlightState;
- (BOOL)_getSelectedObject:(id *)arg1 plane:(id *)arg2;
- (void)modelDidRefresh;
- (void)setModel:(id)arg1;
- (long long)compareStrategyName:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
*/

