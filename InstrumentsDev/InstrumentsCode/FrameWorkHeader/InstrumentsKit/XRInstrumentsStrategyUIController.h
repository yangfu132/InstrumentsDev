//
//  XRInstrumentsStrategyUIController.h
//  MacDemoNew
//
//  Created by yangfl on 2016/12/30.
//  Copyright © 2016年 szzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XRStrategyUIController.h"
/*
@interface XRInstrumentsStrategyUIController : NSObject

@end
*/

/*
@interface XRInstrumentsStrategyUIController : XRStrategyUIController
{
    NSMutableDictionary *_topLevelItemsByUUID;
    XRInstrumentStrategyTopLevelItem *_selectedInstrumentTopLevelItem;
    long long _lastRunNumberSelected;
    BOOL _instrumentListMutated;
    BOOL _instrumentSelectionMutated;
    BOOL _fullTrackRefresh;
    XRLazyKVOAdapter *_kvoAdapter;
    XRInstrumentsTimelineAccessibilityElement *_timelineAccessibilityElement;
    id _selectionObject;
}

+ (id)_defaultState;
+ (id)_requiredStrategyControllerIdentifier;
+ (id)_createDetailViewController;
@property(retain, nonatomic) id selectionObject; // @synthesize selectionObject=_selectionObject;
- (void).cxx_destruct;
- (void)handleLazyKVOUpdate:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)_performDragOperation:(id)arg1;
- (BOOL)_prepareForDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)_draggingEntered:(id)arg1;
- (void)_setDeckUnits:(long long)arg1 forRepresentedObject:(id)arg2;
- (void)_collapseRepresentedObject:(id)arg1;
- (void)_expandRepresentedObject:(id)arg1;
- (void)_replaceOldState:(id)arg1 withState:(id)arg2;
- (void)_resolutionDidChange;
- (void)_populateExtendedDetailModel;
- (void)_eventHorizonAdvancedThroughRange:(struct XRTimeRange)arg1;
- (void)_inspectionTimeIs:(unsigned long long)arg1;
- (void)_documentUpdateFilterForRunNumber:(long long)arg1;
- (void)_setModelSelection:(id)arg1;
- (id)_topLevelItemForInstrument:(id)arg1;
- (BOOL)_resolution:(unsigned long long)arg1 differsFrom:(unsigned long long)arg2;
- (void)_resetPlanesInTimeline;
- (id)planesForOverlayToMonitor;
- (id)_currentSelectionFilteredDataSource;
- (id)_currentSelectionContext:(id)arg1 container:(id)arg2;
- (id)_currentSelectionIcon;
- (void)_finalShutdownHandler;
- (void)_takeControlOfDetailView;
- (void)_forceInstrumentSelection;
- (void)_updateSelectedPlanes;
- (void)_handleConsolidatedModelRefresh;
- (void)_setTimelineGraph:(id)arg1;
- (void)setModel:(id)arg1;
- (void)selectInstrument:(id)arg1;
- (id)dataElementsForModalEditor;
- (id)planeForSelection:(id)arg1 embeddableInTimeline:(id)arg2;
- (id)displayName;
- (id)_state;
- (id)init;

@end
*/
