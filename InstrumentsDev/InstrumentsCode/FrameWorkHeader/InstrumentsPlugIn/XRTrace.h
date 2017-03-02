//
//  XRTrace.h
//  MacDemoNew
//
//  Created by yangfl on 2016/12/27.
//  Copyright © 2016年 szzc. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
@interface XRTrace : NSObject

@end
 */




/*
@interface XRTrace : NSObject <XRDeviceObserver, XRTemplateProtocol>
{
    NSURL *_outputURL;
    BOOL _shouldKeepOriginalDirectory;
    NSURL *_previousTemplateURL;
    PFTInstrumentList *_basicInstruments;
    PFTInstrumentList *_recordingInstruments;
    PFTInstrumentCommand *_instrumentCommand;
    XRRunListData *_runData;
    NSAttributedString *_templateDescription;
    NSString *_templateIconURL;
    NSString *_documentUUID;
    NSTimer *_timerTick;
    NSTimer *_timerHalfTick;
    NSTimer *_timeLimitTimer;
    BOOL _paused;
    BOOL _verbose;
    XRFlagController *_flagController;
    XRWorkTracker *_workTracker;
    XRStrategyManager *_strategyManager;
    XRDevice *_device;
    NSMutableDictionary *_cpuFormulaNamesToText;
    NSMutableDictionary *_cpuPMFormulasDictionary;
    id _owner;
    BOOL _localKTraceIsBlessed;
    NSMapTable *_currentRunsTapTokens;
    XRIntKeyedDictionary *_existenceProjectorsByEngTypeByRun;
 
    XRAnalysisCoreSpace *_coreSpace;
 
    XRIntKeyedDictionary *_coresByRunNumber;
    BOOL _needsBindingSolutionForNextRun;
    NSOperation *_lastHorizonMovementOp;
    XRUniqueErrorAccumulator *_errorAccumulator;
    DVTSystemActivityToken *_suspendIdleToken;
    NSMutableArray *_windowModeFlags;
    XRRecordingOptions *_recordingOptions;
}

+ (id)templateItemsRetainBlank:(BOOL)arg1;
+ (id)defaultAndCustomTemplatePaths;
+ (id)customTemplatePaths;
+ (id)defaultTemplatePaths;
+ (id)pathForPlatform:(id)arg1;
+ (void)initialize;
+ (BOOL)isRunningCommandLine;
@property(retain, nonatomic) XRRecordingOptions *recordingOptions; // @synthesize recordingOptions=_recordingOptions;
- (void).cxx_destruct;
- (id)threadsByTIDInRunNumber:(long long)arg1;
- (id)pidsForRunNumber:(long long)arg1;
- (id)processWithPid:(int)arg1 runNumber:(long long)arg2;
- (id)registerProcessWithPid:(int)arg1 runNumber:(long long)arg2;
- (void)setTimeInfo:(const struct _XRDeviceTimeInfo *)arg1 forDevice:(id)arg2 andRunNumber:(long long)arg3;
- (struct _XRDeviceTimeInfo)timeInfoForDevice:(id)arg1 andRunNumber:(long long)arg2;
- (id)presentStrategyIdentifiersInRunNumber:(long long)arg1;
- (id)strategyManager;
- (id)deviceForRunNumber:(long long)arg1;
- (id)workTracker;
- (void)unregisterFlag:(id)arg1 forRunNumber:(long long)arg2;
- (void)registerFlag:(id)arg1 forRun:(long long)arg2;
- (void)registerFlag:(id)arg1 forRunNumber:(long long)arg2 displayed:(BOOL)arg3;
- (void)_selectedRunChanged:(id)arg1;
- (id)flagController;
- (void)close;
- (void)setDocumentUUID:(id)arg1;
- (id)documentUUID;
- (BOOL)saveDocument:(id)arg1 error:(id *)arg2;
- (BOOL)_copySubPath:(id)arg1 fromOldArchivePath:(id)arg2 toNewArchivePath:(id)arg3 addToPathsList:(id)arg4 error:(id *)arg5;
- (BOOL)_copyDataForRunNumber:(long long)arg1 instrument:(id)arg2 fromOldArchivePath:(id)arg3 toNewArchivePath:(id)arg4 addToPathsList:(id)arg5 error:(id *)arg6;
- (void)_cleanPaths:(id)arg1 excluding:(id)arg2;
- (BOOL)_conditionalCreateOutputDirectory:(id)arg1 addToPathsList:(id)arg2 error:(id *)arg3;
- (BOOL)loadDocument:(id)arg1 error:(id *)arg2;
- (BOOL)saveTemplate:(id)arg1 asPartOfDocument:(BOOL)arg2 error:(id *)arg3;
- (BOOL)loadTemplate:(id)arg1 outputURL:(id)arg2 preserveRunHistory:(BOOL)arg3 error:(id *)arg4;
- (id)templateDescription;
- (void)setTemplateDescription:(id)arg1;
- (id)templateIconURL;
- (void)setTemplateIconURL:(id)arg1;
- (void)_runTimerLimitReached:(id)arg1;
- (void)_runTimerHalfTickFireMethod:(id)arg1;
- (void)_runTimerTickFireMethod:(id)arg1;
- (void)_bumpEventHorizonTo:(unsigned long long)arg1;
- (void)startAdHocInstrument:(id)arg1;
- (void)_runDidEnd:(id)arg1;
- (void)togglePauseCommand;
- (void)endCommand;
- (BOOL)startCommandWithPurpose:(int)arg1;
- (void)_enableLiveSymbolicatorServiceForAllDevices:(BOOL)arg1;
- (void)_releaseSuspendToken;
- (void)_acquireSuspendToken;
- (void)synthesizeRunDataForImportRunNumber:(long long)arg1;
- (void)_recordRunInformation;
- (void)_recordArchitectureNotification:(id)arg1;
- (BOOL)canPerformCommand;
- (void)deleteRunNumber:(long long)arg1;
- (void)promoteRunNumber:(long long)arg1;
- (id)runData;
- (void)setRunData:(id)arg1;
- (BOOL)isRunning;
- (void)setInstrumentCommand:(id)arg1;
- (id)instrumentCommand;
- (id)peersOfInstrument:(id)arg1;
- (id)instrumentWithUUID:(id)arg1;
- (id)recordingInstruments;
- (id)basicInstruments;
- (void)reportError:(id)arg1;
- (void)setVerbose:(BOOL)arg1;
- (BOOL)verbose;
- (id)outputURL;
- (void)setOutputURL:(id)arg1;
- (void)setOwner:(id)arg1;
- (id)owner;
- (void)handleDeviceNotification:(id)arg1;
- (id)coreForRunNumber:(long long)arg1;
- (id)coreSpace;
- (id)errorAccumulator;
- (void)dealloc;
- (id)initForCommandLine:(BOOL)arg1;
- (id)allCores;
- (int)numberOfCpus;
- (void)recordHardwareInformation:(id)arg1;
- (void)recordHardwareInformation:(id)arg1 forRunNumber:(long long)arg2;
- (id)temporaryFormulaEvaluatorForFormulaText:(id)arg1;
- (id)formulaEvaluatorNamed:(id)arg1;
- (void)removeFormulaNamed:(id)arg1;
- (void)modifyFormulaNamed:(id)arg1 withNewText:(id)arg2;
- (void)addFormulaNamed:(id)arg1 text:(id)arg2;
- (id)cpuFormulaNamesToText;
- (void)loadPMDevice;
- (void)setTargetDevice:(id)arg1;
- (id)targetDevice;
- (void)targetDeviceChanged:(id)arg1;
- (void)awakeFromTemplate;
- (void)refreshBindingSolutionForNextRun;
- (void)setNeedsBindingSolution;
- (id)_sealTraceAfterOperation:(id)arg1;
- (void)_refreshExistenceProjectorsForRun:(long long)arg1;
- (id)installExistenceProjectorsAfterOperation:(id)arg1;
- (id)_presentStrategyIdentifiersInRunNumber:(long long)arg1;
- (void)_endRecordingForAnalysisCore;
- (void)_stopRecordingForAnalysisCore;
- (void)voteForEpoch:(id)arg1;
- (void)_startRecordingIntoAnalysisCore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
*/
