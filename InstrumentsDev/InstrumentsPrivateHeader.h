//
//  InstrumentsPrivateHeader.h
//  MacDemoNew
//
//  Created by szzc on 2016/11/28.
//  Copyright © 2016年 szzc. All rights reserved.
//

#ifndef InstrumentsPrivateHeader_h
#define InstrumentsPrivateHeader_h
#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>

#ifdef __cplusplus
extern "C" {
#endif
    NSString *PFTDeveloperDirectory(void);
    void DVTInitializeSharedFrameworks(void);
    BOOL PFTLoadPlugins(void);
#ifdef __cplusplus
}
#endif

@interface DVTDeveloperPaths : NSObject
+ (NSString *)applicationDirectoryName;
+ (void)initializeApplicationDirectoryName:(NSString *)name;
@end

@interface XRInternalizedSettingsStore : NSObject
+ (NSDictionary *)internalizedSettings;
+ (void)configureWithAdditionalURLs:(NSArray *)urls;
@end

@interface PFTCallTreeNode : NSObject
- (NSString *)libraryName;
- (NSString *)symbolName;
- (NSUInteger)address;
- (NSArray *)symbolNamePath; // Call stack
- (PFTCallTreeNode *)root;
- (PFTCallTreeNode *)parent;
- (NSArray *)children;
- (int)numberChildren;
- (int)terminals; // An integer value of this node, such as self running time in millisecond.
- (int)count; // Total value of all nodes of the subtree whose root node is this node. It means that if you increase terminals by a value, count will also be increased by the same value, and that the value of count is calculated automatically and you connot modify it.
- (NSUInteger)weightCount; // Count of different kinds of double values;
- (double)selfWeight:(NSUInteger)index; // A double value similar to terminal at the specific index.
- (double)weight:(NSUInteger)index; // A double value similar to count at the specific index. The difference is that you decide how weigh should be calculated.
- (double)selfCountPercent; // self.terminal / root.count
- (double)totalCountPercent; // self.count / root.count
- (double)parentCountPercent; // parent.count / root.count
- (double)selfWeightPercent:(NSUInteger)index; // self.selfWeight / root.weight
- (double)totalWeightPercent:(NSUInteger)index; // self.weight / root.weight
- (double)parentWeightPercent:(NSUInteger)index; // parent.weight / root.weight
@end


@interface XRBacktraceRepository : NSObject<NSCoding>
- (PFTCallTreeNode *)rootNode;
- (void)refreshTreeRoot;
- (void)applyFocusInformation:(id)arg1;
@end

@interface XRAnalysisCore : NSObject
@end

@interface XRDevice : NSObject
- (NSString *)deviceIdentifier;
- (NSString *)deviceDisplayName;
- (NSString *)deviceDescription;
- (NSString *)productType;
- (NSString *)productVersion;
- (NSString *)buildVersion;
@end

@interface XRRun : NSObject
- (XRDevice *)device;
- (NSInteger)runNumber;
- (NSString *)displayName;
- (NSTimeInterval)startTime;
- (NSTimeInterval)endTime;
@end

@interface XRSamplerRun : XRRun
- (XRBacktraceRepository *)backtraceRepository;
@end


@interface XRRunListData : NSObject
- (NSDictionary *)runData;
- (NSArray *)runNumbers;
- (NSDictionary *)dataForAllRuns;
@end

@interface PFTInstrumentType : NSObject
- (NSString *)uuid;
- (NSString *)name;
- (NSString *)category;
@end

@interface XRInstrument : NSObject
- (PFTInstrumentType *)type;
- (NSArray *)allRuns;
- (void)setViewController:(id)arg1;
@end

@interface PFTInstrumentList : NSObject
- (NSArray *)allInstruments;
@end

@interface XRTrace : NSObject
- (instancetype)initForCommandLine:(BOOL)commandLine;
- (PFTInstrumentList *)basicInstruments;
- (PFTInstrumentList *)recordingInstruments;
- (XRRunListData *)runData;
- (XRAnalysisCore *)coreForRunNumber:(NSInteger)runNumber;
- (void)awakeFromTemplate;
- (BOOL)saveDocument:(NSURL *)documentURL saveAllRuns:(BOOL)saveAllRuns error:(NSError **)errpt;
- (BOOL)loadDocument:(NSURL *)documentURL error:(NSError **)errpt;
- (void)setOwner:(id)arg1;
- (void)close;
@end

#pragma mark - extend

@interface XRMultiProcessBacktraceRepository : XRBacktraceRepository
{
}
- (id)initWithDevice:(id)arg1 trace:(id)arg2 runNumber:(long long)arg3 weightCount:(unsigned long long)arg4;
- (id)allRepositories;
- (void)setBacktraceRepository:(id)arg1;
- (void)setNeedsForceReloadData:(BOOL)arg1;
- (void)reloadDetailData;
- (void)setCallTreeDataSource:(id)arg1;
- (void)setSymbolicationTiming:(int)arg1;
- (void)setSeparateByCategory:(BOOL)arg1;
- (void)applyFocusInformation:(id)arg1;
@end

@class XRAnalysisCoreCallTreeViewController;

@protocol XRAnalysisCoreCallTreeViewControllerDelegate <NSObject>

@optional
- (void)callTreeViewControllerDidUpdateContext:(XRAnalysisCoreCallTreeViewController *)arg1;
- (void)callTreeViewControllerWillUpdateContext:(XRAnalysisCoreCallTreeViewController *)arg1;
@end

/*
@interface XRAnalysisCoreProjectorSpec : NSObject <NSMutableCopying>
{
    NSMutableArray *_projections;
    NSMutableArray *_independentVariables;
    NSMapTable *_identifierToIdxMap;
    NSString *_displayName;
    XRAnalysisCoreTableQuery *_filter;
}

@property(retain, nonatomic) XRAnalysisCoreTableQuery *filter; // @synthesize filter=_filter;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)enumerateProjections:(CDUnknownBlockType)arg1;
- (unsigned char)projectionIndexForDependentVariableIndex:(unsigned char)arg1;
- (unsigned char)dependentVariableIndex:(unsigned char)arg1;
@property(readonly, nonatomic) unsigned char dependentVariableCount;
@property(readonly, nonatomic) unsigned char dimensionCount;
- (unsigned char)projectionWithIdentifier:(id)arg1;
- (unsigned char)addProjectionWithFunction:(id)arg1;
- (unsigned char)addIndependentVariable:(id)arg1;
- (unsigned char)addIndependentVariable:(id)arg1 identifier:(id)arg2;
- (unsigned char)addProjectionWithFunction:(id)arg1 identifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSpec:(id)arg1;
- (unsigned long long)hash;
- (id)copy;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithSchema:(id)arg1;
- (id)initWithFilter:(id)arg1 displayName:(id)arg2 independents:(id)arg3 projections:(id)arg4 identifierMap:(id)arg5;

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

/*
@interface XRAnalysisCoreProjector : NSObject
{
    XRAnalysisCoreProjectorSpec *_spec;
    XRStorageManager *_store;
    struct unique_ptr<Projection, std::__1::default_delete<Projection>> _projector;
    id <XRAnalysisCoreRegistry> _registry;
    NSDate *_creationTime;
    XRAnalysisCoreRowArray *_factualContent;
    XRAnalysisCoreRowArray *_speculativeContent;
    NSOperation *_currentRefreshOp;
    XRAnalysisCore *_core;
}

+ (id)refreshAndAccessProjectors:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak XRAnalysisCore *core; // @synthesize core=_core;
@property(retain, nonatomic) NSOperation *currentRefreshOp; // @synthesize currentRefreshOp=_currentRefreshOp;
@property(retain, nonatomic) XRAnalysisCoreRowArray *speculativeContent; // @synthesize speculativeContent=_speculativeContent;
@property(retain, nonatomic) XRAnalysisCoreRowArray *factualContent; // @synthesize factualContent=_factualContent;
@property(copy, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) XRAnalysisCoreProjectorSpec *spec; // @synthesize spec=_spec;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)destroyCursor:(struct XRAnalysisCoreProjectionCursor *)arg1;
- (struct XRAnalysisCoreProjectionCursor *)createNewCursorWithCore:(id)arg1;
- (id)refresh;
- (void)access:(CDUnknownBlockType)arg1;
- (unsigned short)engineeringTypeForProjectionIndex:(unsigned char)arg1;
- (id)displayNameForProjectionIndex:(unsigned char)arg1;
- (void)receiveSpeculativeRows:(struct XRAnalysisCoreAbstractRowArrayCursor *)arg1 core:(id)arg2;
- (void)purgeSpeculativeAggregates;
- (void)receiveNewRows:(struct XRAnalysisCoreAbstractRowArrayCursor *)arg1 core:(id)arg2 activity:(id)arg3;
- (void)_prepareForUpdate:(struct XRAnalysisCoreAbstractRowArrayCursor *)arg1 core:(id)arg2;
- (void)readSourceWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)stale;
- (void)attachToSource;
@property(readonly, nonatomic) unsigned int tableID;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSpec:(id)arg1 registry:(id)arg2;

@end
*/

@interface XRAnalysisCoreCallTreeViewController : NSViewController
{
    /*
     XRSlidingCapableScrollView *_callTreeScrollView;
     XRCallTreeDetailView *_callTreeView;
     */
    XRMultiProcessBacktraceRepository *_backtraceRepository;
    /*
     XRIntKeyedDictionary *_wrappers;
     NSMutableDictionary *_aggregatorByCategory;
     unsigned int _backtraceAggIdx;
     unsigned char _backtraceDim;
     unsigned char _threadDim;
     unsigned char _categoryDim;
     NSString *_categoryDimName;
     XREngineeringTypeFormatter *_myEngFormatter;
     XRAnalysisCoreProjector *_projector;
     NSTimer *_deferredSelectionUpdateTimer;
     NSDictionary *_activeFocusInfo;
     */
    id <XRAnalysisCoreCallTreeViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <XRAnalysisCoreCallTreeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
/*
 - (void).cxx_destruct;
 - (void)filterDetailWithTokens:(id)arg1 context:(id)arg2 matchesAny:(BOOL)arg3;
 - (id)searchContexts;
 - (id)selectedSearchContext;
 - (void)refineQueryBasedOnUIState:(id)arg1;
 - (id)contextRepresentation;
 - (id)currentCallTreeFilter;
 - (void)_stackFrameSelected:(id)arg1;
 - (void)_focusOnCallTreeNode:(id)arg1;
 - (id)dataElementForHeaviestStack;
 - (id)dataMiningElementsWithState;
 - (id)processCategoriesForPid:(int)arg1;
 - (id)provideCategories;
 - (id)backtracesForCategory:(id)arg1 timeRange:(struct XRTimeRange)arg2 savedIndex:(unsigned long long *)arg3;
 - (void)resetAggregatesForRepository:(id)arg1;
 - (void)_deferredSelectionTimeout:(id)arg1;
 - (void)restoreUIState:(id)arg1;
 - (void)saveUIState:(id)arg1;
 - (void)refresh;
 - (void)instrumentWillBecomeInvalid;

 - (void)_mainThreadFillAggregator;
 */
 - (void)_mainThreadAdaptCallTree;
- (void)_mainThreadRepoDidReset;
/*
 - (void)viewWillLayout;
 - (void)viewWillAppear;
 - (void)loadView;
 - (void)setRepresentedObject:(id)arg1;
 - (void)dealloc;
 
 // Remaining properties
 @property(readonly, copy) NSString *debugDescription;
 @property(readonly, copy) NSString *description;
 @property(readonly) unsigned long long hash;
 @property(readonly) Class superclass;
 */
@end

@interface XRAnalysisCoreProjectorForTables : NSObject
{
//    XRAnalysisCoreTableManager *_tableManager;
//    XRIndexedStorage *_store;
//    unsigned int _tableID;
}

//- (void).cxx_destruct;
//- (void)readSourceWithBlock:(CDUnknownBlockType)arg1;
//- (unsigned int)tableID;
//- (id)init;
//- (id)initWithSpec:(id)arg1 registry:(id)arg2;
//- (id)initWithSpec:(id)arg1 store:(id)arg2 tableID:(unsigned int)arg3 registry:(id)arg4;

@end

@interface PFTTraceDocument : NSDocument
- (id)mainWindowController;
@end

@interface PFTDocumentController : NSDocumentController

@end

@interface XRAnalysisCoreStandardController : NSObject
- (id)initWithInstrument:(id)arg1 document:(id)arg2;
@end

@interface XRAnalysisCoreDetailViewController : NSViewController

@end

@interface XRAnalysisCoreTableViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource>
 - (void)restoreUIState:(id)arg1;
- (id)_lastResponse;
- (id)_currentResponse;
- (void)setDocumentInspectionTime:(unsigned long long)arg1;
@end

@interface XRAnalysisCoreDetailNode : NSObject <NSSecureCoding>
@property(readonly, nonatomic) XRAnalysisCoreDetailNode *nextSibling; // @synthesize nextSibling=_nextSibling;
@property(readonly, nonatomic) XRAnalysisCoreDetailNode *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic, getter=isSelectable) BOOL selectable;
@property(readonly, nonatomic) XRAnalysisCoreDetailNode *firstSibling;
- (id)root;
@end

@interface PFTWindowController : NSWindowController
@property(readonly, nonatomic) NSViewController *detailViewController;
@end

@interface XRCallTreeDetailView : NSObject

@end

@interface XRAnalysisCoreValueCellView : NSObject
- (id)stringValue;
@end

@interface PFTTableDetailView : NSTableView
+ (id)_stringForRows:(id)arg1 inView:(id)arg2 delimiter:(unsigned short)arg3;
- (id)tableColumnWithIdentifier:(id)arg1 andIndex:(unsigned long long)arg2;
- (long long)columnWithIdentifier:(id)arg1 andIndex:(unsigned long long)arg2;
- (id)exportableData;
@end

@interface XRStreamedPowerInstrument : NSObject
- (id)detailElements;
- (id)dataElementsForContext:(id)arg1;
- (id)detailElementsForExtendedDetailViewContext;
- (id)detailElementsForDetailViewContext;
- (id)detailElementsForConfigurationViewContext;
- (id)detailElementsForSetupViewContext;
@end

@interface XRNetworkingInstrument : NSObject
- (id) selectedRunQueryResult;
@end

#endif /* InstrumentsPrivateHeader_h */
