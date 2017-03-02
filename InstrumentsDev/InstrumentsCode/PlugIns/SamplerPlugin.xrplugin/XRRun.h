//
//  XRRun.h
//  MacDemoNew
//
//  Created by yangfl on 2016/12/30.
//  Copyright © 2016年 szzc. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
@interface XRRun : NSObject

@end
*/

/*
@interface XRRun : NSObject <NSCoding>
{
    long long _runNumber;
    double _startTime;
    double _endTime;
    NSString *_path;
    NSString *_errMessage;
    NSString *_errSection;
    NSString *_helpReference;
    NSMutableDictionary *_runData;
    NSMutableArray *_trackSegments;
    BOOL _dataChanged;
    BOOL _fetchedArchInfo;
    BOOL _is64BitTarget;
    NSMutableArray *_flags;
    NSLock *_flagsLock;
    XRManagedObjectList *_bookmarkFlags;
    struct _XRDeviceTimeInfo _deviceTimeInfo;
    XRInstrument *_instrument;
    XRDevice *_device;
    XRDatasetExpertSpace *_datasetExpertSpace;
    NSString *_kTraceTapUUID;
    NSDictionary *_tableIDsBySpec;
    XRAnalysisCoreUIPlan *_userInterfacePlan;
}

+ (void)initialize;
@property(retain) XRAnalysisCoreUIPlan *userInterfacePlan; // @synthesize userInterfacePlan=_userInterfacePlan;
@property(retain) NSString *kTraceTapUUID; // @synthesize kTraceTapUUID=_kTraceTapUUID;
@property BOOL dataChanged; // @synthesize dataChanged=_dataChanged;
- (void).cxx_destruct;
- (BOOL)canProvideCursorForNavigator:(id)arg1;
- (id)tableIDsBySpec;
- (void)setTableIDsBySpec:(id)arg1;
- (void)selectRowsFromDatasetExpert:(id)arg1;
@property(readonly) XRDatasetExpertSpace *datasetExpertSpace;
- (void)didInitializeDatasetExpertSpace:(id)arg1;
- (id)eventDescriptorForIdentifier:(id)arg1;
- (id)threadStrategyController;
- (id)helpReference;
- (void)setHelpReference:(id)arg1;
- (id)errorSection;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (void)setErrorMessage:(id)arg1 inSection:(id)arg2;
- (void)resymbolicationDidComplete;
- (void)setIs64bit:(BOOL)arg1;
- (BOOL)is64Bit;
- (id)interfaceObjectForKey:(id)arg1;
- (void)setInterfaceObject:(id)arg1 forKey:(id)arg2;
- (id)userInterfaceData;
- (id)dataContextObjectForKey:(id)arg1;
- (void)setDataContextObject:(id)arg1 forKey:(id)arg2;
- (id)dataContexts;
- (id)bookmarkFlags;
@property(readonly) const struct _XRDeviceTimeInfo *deviceTimeInfo;
- (void)highlightFlag:(id)arg1 focus:(BOOL)arg2;
- (id)flagWithValue:(id)arg1 forKey:(id)arg2;
- (id)flagList;
- (unsigned long long)flagCount;
- (BOOL)hasFlags;
- (void)removeFlag:(id)arg1;
- (void)addFlag:(id)arg1;
- (id)additionalSupportedBrushNamesForStrategy:(id)arg1;
- (id)supportedBrushNamesForStrategy:(id)arg1;
- (Class)connectionDecoratorForStrategy:(id)arg1;
- (Class)decoratorForStrategy:(id)arg1;
- (void)cleanupFromView;
- (void)stopCurrentTrackSegmentNow;
- (void)addTrackSegment:(id)arg1;
- (void)clearTrackSegments;
- (void)_addTrackSegment:(id)arg1;
- (id)allSegments;
- (int)targetProcessIdentifier;
- (void)setTargetProcessIdentifier:(int)arg1;
@property(readonly) struct XRTimeRange timeRange;
- (BOOL)isRunning;
- (void)setEnd:(double)arg1;
- (double)endTime;
- (void)setStart:(double)arg1;
- (double)startTime;
@property(readonly) NSURL *ktraceTapURL;
@property(readonly) NSURL *intermediatesURL;
- (id)path;
- (id)displayName;
- (long long)runNumber;
- (void)setDevice:(id)arg1;
@property __weak XRInstrument *instrument;
- (BOOL)shouldSaveToDocument;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setupWithRunNumber:(long long)arg1 atPath:(id)arg2;
@property(readonly) __weak XRDevice *device;
- (id)init;
- (void)finishedImportingSession:(id)arg1;
- (void)prepareToImportSession:(id)arg1;

@end
 */
