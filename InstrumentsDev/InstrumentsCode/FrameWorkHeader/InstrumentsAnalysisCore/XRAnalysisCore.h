//
//  XRAnalysisCore.h
//  MacDemoNew
//
//  Created by yangfl on 2016/12/27.
//  Copyright © 2016年 szzc. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
@interface XRAnalysisCore : NSObject

@end
*/

/*
@protocol XRAnalysisCoreReadOnly
- (id)oracleFunctionTokenWithName:(NSString *)arg1;
- (BOOL)invokeOracleFunction:(id)arg1 invocation:(id <XRAnalysisCoreFunctionInvocation>)arg2;
- (id <XRAnalysisCoreFunctionInvocation>)createFunctionInvocation;
- (BOOL)getValue:(id *)arg1 signature:(unsigned long long)arg2 engineeringType:(unsigned short)arg3;
- (BOOL)getValue:(id *)arg1 implValue:(XRAnalysisCoreImplValue *)arg2 engineeringType:(unsigned short)arg3;
- (BOOL)setImplValue:(id *)arg1 signature:(unsigned long long)arg2 engineeringType:(unsigned short)arg3;
- (XRAnalysisCoreTableSchema *)schemaWithName:(NSString *)arg1;
- (NSString *)coreSubpath;
@end
*/

/*
@protocol XRAnalysisCoreQueryFrameAccessorBase
- (void)randomAccessForTableID:(unsigned int)arg1 block:(void (^)(struct XRAnalysisCoreReadCursor *))arg2;
- (void)query:(XRAnalysisCoreTableQuery *)arg1 tableID:(unsigned int)arg2 handler:(id <XRAnalysisCoreQueryHandler>)arg3;
@end
*/

/*
@interface XRAnalysisCore : NSObject <XRAnalysisCoreReadOnly, XRAnalysisCoreQueryFrameAccessor>
{
    XRAnalysisCoreContext *_context;
    XRAnalysisCoreBindingHemisphere *_bindingHemisphere;
    XRAnalysisCoreModelingHemisphere *_modelingHemisphere;
    XRFrameCommutator *_commutator;
    XRFrameRing *_primaryRing;
    XRAnalysisCoreQueryManager *_queryActivityManager;
    XRAnalysisCoreModelingManager *_modelingActivityManager;
    XRAnalysisCoreBulkLoadManager *_bulkLoadActivityManager;
    XRAnalysisCoreOptimizationManager *_optimizationActivityManager;
    XRAnalysisCoreConfigurationManager *_configurationActivityManager;
    XRAnalysisCoreProjectorAccessManager *_projectorAccessManager;
    unsigned long long _lastEventHorizon;
    unsigned long long _targetEventHorizon;
}

+ (id)engineeringTypeInformalMnemonicForTypeID:(unsigned short)arg1;
+ (id)engineeringTypeMnemonicForTypeID:(unsigned short)arg1;
+ (unsigned long long)sentinelSignatureForEngineeringTypeID:(unsigned short)arg1;
+ (unsigned long long)attributesForEngineeringTypeID:(unsigned short)arg1;
+ (unsigned char)implementationTypeFromID:(unsigned short)arg1;
+ (unsigned short)engineeringTypeIDFromMnemonic:(id)arg1;
+ (void)registerCapabilities:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <XRErrorResponder> standardErrorResponder;
@property(retain, nonatomic) id <XRErrorResponder> errorResponder;
- (void)debugPanicStop;
@property(nonatomic) unsigned long long debugLoggingFlags;
- (id)performSelfDiagnostic;
- (id)performSelfDiagnosticWithOptions:(unsigned long long)arg1;
- (void)debugLogString:(id)arg1;
- (void)debugEnumerateModelerSolution:(CDUnknownBlockType)arg1;
- (void)debugEnumerateInternalTables:(CDUnknownBlockType)arg1;
- (id)debugStringForTable:(id)arg1;
- (id)addScheduledNeighborhoodQueryToGroup:(id)arg1 qualityOfService:(unsigned int)arg2 tableID:(unsigned int)arg3 neighborhoodSpecification:(id)arg4;
- (id)refreshProjector:(id)arg1;
- (id)refreshAndAccessProjectors:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)accessProjector:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)getProjector:(id *)arg1 tableID:(unsigned int)arg2 spec:(id)arg3;
- (id)oracleFunctionTokenWithName:(id)arg1;
- (BOOL)invokeOracleFunction:(id)arg1 invocation:(id)arg2;
- (id)createFunctionInvocation;
- (id)changeSortDescriptors:(id)arg1 array:(id)arg2;
- (id)refreshPivotArray:(id)arg1;
- (id)refreshRowArray:(id)arg1;
- (void)accessPivotArray:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)addScheduledAccessSessionToGroup:(id)arg1 qualityOfService:(unsigned int)arg2 session:(CDUnknownBlockType)arg3;
- (void)readRowsInArray:(id)arg1 startingAt:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;
- (void)randomAccessForTableID:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (id)selectRowsWithQuery:(id)arg1 tableID:(unsigned int)arg2 sortDescriptors:(id)arg3;
- (id)selectRowsWithQuery:(id)arg1 tableID:(unsigned int)arg2;
- (void)query:(id)arg1 tableID:(unsigned int)arg2 handler:(id)arg3;
- (void)setTargetEventHorizon:(unsigned long long)arg1;
- (id)populateTableFromImportStream:(id)arg1;
- (void)populateTableIDs:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)columnForTableID:(unsigned int)arg1 columnID:(unsigned char)arg2;
- (id)tableWithID:(unsigned int)arg1;
- (void)enumerateTables:(CDUnknownBlockType)arg1;
- (void)addOracleFunction:(id)arg1 name:(id)arg2;
- (void)setNotificationCenter:(id)arg1 queue:(id)arg2;
- (id)seal;
- (id)disengage;
- (id)engage;
- (void)realizeBindingSolution;
- (void)solveBindingProblem;
- (void)setBindingParameters:(id)arg1;
- (void)removeRequiredTableWithID:(unsigned int)arg1;
- (unsigned int)firstTableIDMatchingSpec:(id)arg1 access:(int)arg2;
- (unsigned int)addRequiredTableWithSpec:(id)arg1;
- (void)debugBinderEngineExecuteCommand:(id)arg1 moduleName:(id)arg2;
- (id)binderEngineSwapConsoleBuffer:(id)arg1;
- (id)debugBinderEngineFactsForModule:(id)arg1;
- (id)debugBinderEngineModuleNames;
- (id)registerValueWithImpl:(id)arg1 engineeringType:(unsigned short)arg2;
- (BOOL)getValue:(id *)arg1 signature:(unsigned long long)arg2 engineeringType:(unsigned short)arg3;
- (BOOL)getValue:(id *)arg1 implValue:(id)arg2 engineeringType:(unsigned short)arg3;
- (BOOL)setImplValue:(id *)arg1 signature:(unsigned long long)arg2 engineeringType:(unsigned short)arg3;
- (id)schemaWithName:(id)arg1;
- (void)removeSchemaWithName:(id)arg1;
- (void)addExtension:(id)arg1;
- (void)addSchema:(id)arg1;
- (void)enumerateKnownSchemas:(CDUnknownBlockType)arg1;
- (id)coreSubpath;
- (void)_pathManagerMovedSubpath:(id)arg1;
- (void)moveToSubpath:(id)arg1;
- (void)dealloc;
- (id)initWithPathManager:(id)arg1 dataSubpath:(id)arg2;

@end
*/
