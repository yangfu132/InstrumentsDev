//
//  XRAnalysisCoreDetailViewController.h
//  MacDemoWindow
//
//  Created by yangfl on 2016/12/23.
//  Copyright © 2016年 yangfuliang. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
@interface XRAnalysisCoreCallTreeViewController : NSObject

@end
 */


/*
 
 @protocol XRCallTreeDataSource <NSObject>
 - (XRBacktraceAggregator *)backtracesForCategory:(NSString *)arg1 timeRange:(struct XRTimeRange)arg2 savedIndex:(unsigned long long *)arg3;
 
 @optional
 - (void)resetAggregatesForRepository:(XRBacktraceRepository *)arg1;
 - (NSArray *)processCategoriesForPid:(int)arg1;
 - (NSArray *)provideCategories;
 @end
 
 
 @protocol XRFilteredDataSource <NSObject>
 
 @optional
 - (NSString *)selectedSearchContext;
 - (NSArray *)searchContexts;
 - (void)filterDetailWithTokens:(NSArray *)arg1 context:(NSString *)arg2 matchesAny:(BOOL)arg3;
 @end

 
 
 @interface XRAnalysisCoreCallTreeViewController : NSViewController <XRCallTreeDataSource, XRFilteredDataSource>
 {
 XRSlidingCapableScrollView *_callTreeScrollView;
 XRCallTreeDetailView *_callTreeView;
 XRMultiProcessBacktraceRepository *_backtraceRepository;
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
 id <XRAnalysisCoreCallTreeViewControllerDelegate> _delegate;
 }
 
 @property(nonatomic) __weak id <XRAnalysisCoreCallTreeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
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
 - (void)_mainThreadAdaptCallTree;
 - (void)_mainThreadFillAggregator;
 - (void)_mainThreadRepoDidReset;
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
 
 @end
 */
