//
//  XRLegacyInstrument.h
//  MacDemoNew
//
//  Created by szzc on 2017/1/16.
//  Copyright © 2017年 szzc. All rights reserved.
//

#import "XRInstrument.h"
/*
@interface XRLegacyInstrument : XRInstrument

@end
*/


/*
@interface XRLegacyInstrument : XRInstrument <XRInstrumentViewController, XRContextContainer>
{
    unsigned long long _trueDetailViewType;
    BOOL _isSettingDetailView;
    NSMutableArray *_permittedContexts;
    struct XRTimeRange _selectedTimeRange;
    unsigned long long _inspectionTime;
    XRLegacyInstrumentFilteredSourceProxy *_filteredSourceProxy;
    XRInstrumentStatus *_status;
}

+ (id)keyPathsForValuesAffectingStatus;
@property(retain, nonatomic) XRInstrumentStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)refineSourceAnnotationQuery:(id)arg1;
- (id)provideSourceAnnotationsForQuery:(id)arg1;
- (id)currentCallTreeFilter;
- (void)requestDocumentInspectFlag:(id)arg1;
- (BOOL)requestDocumentSetInspectionTime:(unsigned long long)arg1;
- (void)documentSetInspectionTime:(unsigned long long)arg1;
- (void)instrumentChangedTableRequirements;
- (void)instrumentWillBecomeInvalid;
- (BOOL)resolution:(unsigned long long)arg1 differsFrom:(unsigned long long)arg2 runNumber:(long long)arg3 strategy:(struct NSString *)arg4;
- (void)configureTrackOverlay:(id)arg1;
- (void)configureTrack:(id)arg1;
- (id)dataSourceForBrushWithName:(id)arg1;
- (void)eventHorizonAdvancedThroughRange:(struct XRTimeRange)arg1;
- (id)saveDisplayStateForTemplates;
- (void)restoreDisplayStateFromTemplate:(id)arg1;
- (void)instrumentDidChangeSwitches;
- (id)currentExtendedDetailMetaUI;
- (void)clearCurrentDataContext;
- (id)currentDataContext;
- (id)currentDisplaySettingsDetailMetaUI;
- (id)currentRecordSettingsDetailMetaUI;
- (id)switchAttributes;
- (void)setViewController:(id)arg1;
- (id)instrument;
- (id)detailContextContainer;
- (id)viewController;
- (BOOL)commonContextContainedInPathOfContext:(id)arg1;
- (id)topLevelCommonContexts;
- (id)splitterContext;
- (id)summaryViewContext;
- (id)iconForContext:(id)arg1;
- (unsigned long long)inspectionTime;
- (void)setInspectionTime:(unsigned long long)arg1;
- (void)currentBrushBecameStale;
- (void)didRecordDataInTimeRange:(struct XRTimeRange)arg1;
- (id)detailFilteredDataSource;
- (void)_filterDetailWithTokens:(id)arg1 context:(id)arg2 matchesAny:(BOOL)arg3;
- (id)_selectedSearchContext;
- (id)_searchContexts;
- (id)_dataElementsForContext:(id)arg1;
- (void)restoreFromTraceTemplateData:(id)arg1;
- (void)displayContext:(id)arg1;
- (id)contextRepresentation;
- (id)siblingsForContext:(id)arg1;
- (id)_permittedContexts;
- (void)_focusOnSummary:(id)arg1;
- (void)focusOnSummary:(id)arg1;
- (void)displayContextForPath:(id)arg1;
- (void)_displayContext:(id)arg1;
- (id)sourceViewContext;
- (id)consoleViewContext;
- (id)viewForContext:(id)arg1;
- (id)_detailViewLabelForType:(unsigned long long)arg1;
- (id)detailViewLabelForType:(unsigned long long)arg1;
- (BOOL)isSettingDetailView;
- (void)setIsSettingDetailView:(BOOL)arg1;
- (void)_setDetailViewType:(unsigned long long)arg1;
- (void)setDetailViewType:(unsigned long long)arg1;
- (void)displayDetailViewType:(unsigned long long)arg1;
- (unsigned long long)defaultDetailViewType;
- (unsigned long long)_detailViewType;
- (unsigned long long)detailViewType;
- (unsigned long long)detailViewTypeMask;
- (struct XRTimeRange)selectedTimeRange;
- (void)setSelectedTimeRange:(struct XRTimeRange)arg1;
- (struct XRTimeRange)documentsSelectedTimeRange;
- (void)documentDidUpdateBaseFilterForRunNumber:(long long)arg1;
- (id)traceTemplateData;
- (id)initWithType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
*/

