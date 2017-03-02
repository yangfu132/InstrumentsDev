//
//  XRStreamedPowerInstrument.h
//  MacDemoNew
//
//  Created by szzc on 2017/1/16.
//  Copyright © 2017年 szzc. All rights reserved.
//

#import "XRLegacyInstrument.h"

/*
@interface XRStreamedPowerInstrument : XRLegacyInstrument

@end
*/
/*
@interface XRStreamedPowerInstrument : XRLegacyInstrument <XRImportDataProtocol, XRDeviceLogImporter, XRDeviceLogSupport, NSTableViewDataSource, NSTableViewDelegate>
{
    XRPowerDetailController *_detailController;
    NSMutableDictionary *_eventStreamParsers;
    NSMutableDictionary *_measStreamParsers;
    NSMutableDictionary *_stateStreamParsers;
    NSMutableSet *_streamIDs;
    NSMutableDictionary *_streamIDsByHandle;
    unsigned long long _detailViewType;
    unsigned long long _myLastTickTime;
}

+ (void)initialize;
+ (id)textColorForNoun:(id)arg1 andAdjective:(id)arg2;
+ (id)colorForNoun:(id)arg1 andAdjective:(id)arg2;
- (void).cxx_destruct;
- (void)tick:(id)arg1;
- (BOOL)requiresTickNotification;
- (void)importSession:(id)arg1 fromDevice:(id)arg2 intoTrace:(id)arg3;
- (id)deviceLogImporter;
- (void)setDetailViewType:(unsigned long long)arg1;
- (unsigned long long)detailViewType;
- (id)selectedRun;
- (void)focusOnTime:(unsigned long long)arg1;
- (id)selectedDetailFormatterForColumn:(unsigned long long)arg1;
- (id)selectedEventTitleForColumn:(unsigned long long)arg1;
- (id)selectedEventObjectsForEntries:(const struct XRPowerTimelineEntry *)arg1 count:(unsigned long long)arg2;
- (id)selectedEventTimeline;
- (unsigned long long)selectedEventColumnCount;
- (id)definitionForCurrentDetailView;
- (BOOL)setSelectedRunIndex:(unsigned long long)arg1;
- (void)addData:(id)arg1 toStreamHandle:(id)arg2;
- (void)stopRecording;
- (void)startRecording;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)importRun:(id)arg1 fromPaths:(id)arg2 error:(id *)arg3;
- (void)updateViews;
- (void)setInspectionTime:(unsigned long long)arg1;
- (void)configureTrack:(id)arg1;
- (void)setSelectedTimeRange:(struct XRTimeRange)arg1;
- (id)detailElements;
- (id)dataElementsForContext:(id)arg1;
- (id)detailElementsForExtendedDetailViewContext;
- (id)detailElementsForDetailViewContext;
- (id)detailElementsForConfigurationViewContext;
- (id)detailElementsForSetupViewContext;
- (unsigned long long)defaultDetailViewType;
- (unsigned long long)detailViewTypeMask;
- (id)detailViewLabelForType:(unsigned long long)arg1;
- (BOOL)needsStream:(id)arg1;
- (void)enumerateAllStreamsDefinitionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithExtension:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
*/
