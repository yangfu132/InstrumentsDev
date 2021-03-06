//
//  XRMultiProcessBacktraceRepository.h
//  MacDemoNew
//
//  Created by yangfl on 2016/12/27.
//  Copyright © 2016年 szzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XRBacktraceRepository.h"
/*
@interface XRMultiProcessBacktraceRepository : XRBacktraceRepository

@end
 */


/*
@interface XRMultiProcessBacktraceRepository : XRBacktraceRepository <XRCallTreeDataSource>
{
    struct __CFDictionary *_repositoryForPid;
    NSMutableDictionary *_repositoryForProcessName;
    NSMutableDictionary *_repositoryForCategory;
    NSObject<OS_dispatch_queue> *_repositoryForProcQueue;
    XRBacktraceRepository *_activeRepository;
    BOOL _activeRepositoryIsFake;
    NSMutableDictionary *_unappliedSettings;
    NSPredicate *_processPredicate;
    unsigned long long _preservedIndex;
    XRBacktraceAggregator *_dataSourceAggregation;
    unsigned long long _cacheIndex;
    unsigned long long _cacheUpIndex;
    XRBacktraceAggregator *_cacheAggregation;
    BOOL _avoidSetterRecursion;
    NSDictionary *_freezeDriedSignatures;
    BOOL _disallowFaultingNewSymbolStores;
}

- (void).cxx_destruct;
- (void)storeSample:(id)arg1 forCategory:(id)arg2 excludeFromDefaultCategory:(BOOL)arg3 needsSymbolication:(BOOL)arg4;
- (void)storeBacktrace:(id)arg1 forCategory:(id)arg2 excludeFromDefaultCategory:(BOOL)arg3 weight:(double)arg4 timestamp:(unsigned long long)arg5 eventType:(unsigned int)arg6 thread:(unsigned int)arg7 extendedData:(id)arg8 needsSymbolication:(BOOL)arg9;
- (id)interestingSymbolInBacktrace:(id)arg1;
- (id)hottestSymbolInBacktrace:(id)arg1;
- (id)threadNameForThread:(unsigned long long)arg1 pid:(int)arg2;
- (id)threadNameForThreadId:(unsigned long long)arg1 backtrace:(id)arg2;
- (id)symbolsForBacktrace:(id)arg1 reverseOrder:(BOOL)arg2;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setContainedCategoryTokens:(id)arg1 matchesAny:(BOOL)arg2;
- (BOOL)showObjCOnly;
- (void)setShowObjCOnly:(BOOL)arg1;
- (BOOL)trimMissingSymbols;
- (void)setTrimMissingSymbols:(BOOL)arg1;
- (void)_modifyLibraryTrimming:(id)arg1 option:(int)arg2;
- (void)_modifySymbolTrimming:(id)arg1 option:(int)arg2;
- (void)pruneByRequiringLibraryNameTokens:(id)arg1 requireAny:(BOOL)arg2;
- (BOOL)shouldDisplayActionInOutlineView:(id)arg1 forItem:(id)arg2;
- (void)pruneByRequiringSymbolNameTokens:(id)arg1 requireAny:(BOOL)arg2;
- (void)setSymbolicationTiming:(int)arg1;
- (void)setSeparateByCategory:(BOOL)arg1;
- (void)setShowCategoryAsLeaf:(BOOL)arg1;
- (void)setTimeRangeFilter:(struct XRTimeRange)arg1;
- (id)nameForPid:(int)arg1;
- (void)_setOverrideRepository:(id)arg1;
- (void)setCallTreeDataSource:(id)arg1;
- (id)concatenatedSymbolNamesForBacktrace:(id)arg1;
- (void)setNeedsForceReloadData:(BOOL)arg1;
- (void)_setTrackedTreeData:(id)arg1;
- (id)_newTreeRoot;
- (void)_enumerateRepositoryByPid:(CDUnknownBlockType)arg1;
- (void)_faultRepositoryForCategoryName:(id)arg1 pidRepo:(id)arg2;
- (id)backtracesForCategory:(id)arg1 timeRange:(struct XRTimeRange)arg2 savedIndex:(unsigned long long *)arg3;
- (id)provideCategories;
- (void)setFocusNode:(id)arg1;
- (void)_resetFocus;
- (void)learnSymbolicInformationForBacktrace:(id)arg1;
- (void)_setFocusObject:(id)arg1 forKey:(id)arg2 andNotifyUpdate:(BOOL)arg3;
- (void)applyFocusInformation:(id)arg1;
- (void)_updateDataSourceAggregation;
- (void)_clearDataSourceAggregation;
- (id)focusTitle;
- (id)focusInformation;
- (void)setContainedProcessTokens:(id)arg1 matchesAny:(BOOL)arg2;
- (id)samplesForCategory:(id)arg1;
- (struct __CFData *)kernelSignature;
- (struct __CFData *)signatureForPid:(int)arg1;
- (id)allRepositories;
- (void)addRepository:(id)arg1 forPid:(int)arg2;
- (id)repositoryForPid:(int)arg1;
- (void)_setActiveRepository:(id)arg1 isFake:(BOOL)arg2;
- (void)_setActiveRepository:(id)arg1;
- (void)_enumerateRepositoriesAllowingCallouts:(BOOL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_setRepository:(id)arg1 forPid:(int)arg2 name:(id)arg3;
- (id)_anyRepository;
- (id)_repositoryForName:(id)arg1;
- (id)_repositoryForPid:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 trace:(id)arg2 runNumber:(long long)arg3 weightCount:(unsigned long long)arg4;
- (id)initWithDevice:(id)arg1 signatures:(id)arg2;
- (void)_commonRepositoryInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
*/
