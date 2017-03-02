//
//  XRCallTreeDetailView.h
//  MacDemoNew
//
//  Created by yangfl on 2017/1/13.
//  Copyright © 2017年 szzc. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
@interface XRCallTreeDetailView : NSObject

@end
*/

/*
@interface XRCallTreeDetailView : XROutlineDetailView <XRContextContainer>
{
    XRBacktraceRepository *backtraceDataSource;
    NSMutableSet *_expansionDeckUids;
    NSArray *_selectedStack;
    NSMutableDictionary *_dataSourceKVCState;
    NSString *_navigationKeyPath;
    NSMutableArray *_focusNodeStack;
    XRContext *_contextLast;
    XRInstrument *_observedInstrument;
    NSMutableArray *_selectedUidPath;
    NSString *_contextLabel;
    NSString *_sortID;
    unsigned long long _sortIndex;
    BOOL _sortAscending;
    BOOL _ignoreSelChanges;
    BOOL _conformNextSync;
    BOOL _searchMatchesAny;
    NSString *_activeSearchContext;
    NSArray *_activeSearchTokens;
    NSMutableDictionary *_dataMiningOptions;
    CDUnknownBlockType _setupBlock;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (void).cxx_destruct;
- (void)_filterCurrentDataSource;
- (void)filterDetailWithTokens:(id)arg1 context:(id)arg2 matchesAny:(BOOL)arg3;
- (id)selectedSearchContext;
- (id)searchContexts;
- (void)_updateInstrumentDataElementContexts;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)dataElementForHeaviestStackWithWeightType:(unsigned short)arg1;
- (id)dataElementForHeaviestStack;
- (id)heaviestStackForNode:(id)arg1;
- (id)_heaviestStackWithCurrentSortForRow:(long long)arg1;
- (void)mergeWithRepository:(id)arg1 factor:(int)arg2;
- (id)dataMiningElementsWithState:(BOOL)arg1;
- (void)setDataMiningOptions:(id)arg1;
- (id)dataMiningOptions;
- (void)setValue:(id)arg1 forDataMiningOption:(id)arg2;
- (id)dataMiningMenuForSelectedRow;
- (id)menuForEvent:(id)arg1;
- (void)collapseItem:(id)arg1 collapseChildren:(BOOL)arg2;
- (void)expandItem:(id)arg1 expandChildren:(BOOL)arg2;
- (void)_changeExpansionStateOfItem:(id)arg1 expanded:(BOOL)arg2 involveChildren:(BOOL)arg3;
- (void)selectStackFrame:(id)arg1;
- (void)_stackFrameSelected:(id)arg1;
- (void)_selfSelectionChanged:(id)arg1;
- (void)setSortIdentifier:(id)arg1 sortIndex:(unsigned long long)arg2 ascending:(BOOL)arg3;
- (void)setSortIdentifier:(id)arg1 ascending:(BOOL)arg2;
- (void)_refreshColumnHighlight;
- (void)forceReloadDetailData;
- (void)reloadDetailData;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)backtraceRepository;
- (void)setBacktraceRepository:(id)arg1;
- (void)_resetObservation:(BOOL)arg1;
- (void)setNavigationDataElementKeypath:(id)arg1;
- (void)_navigationSync;
- (id)_nameForFocusNode:(id)arg1;
- (void)pushSelectedNodeAsFocus:(id)arg1;
- (void)_pushFocus:(id)arg1;
- (void)_processContextChange;
- (void)_prepareForContextChange;
- (void)_refreshNavigationObservation;
- (void)_instrumentWillBeRemoved:(id)arg1;
- (void)setInstrument:(id)arg1;
- (id)uuid;
- (id)iconForTitle:(id)arg1;
- (id)iconForContext:(id)arg1;
- (id)viewForContext:(id)arg1;
- (id)siblingsForContext:(id)arg1;
- (void)displayContext:(id)arg1;
- (id)contextRepresentation;
- (void)forceLastColumnToFit;
- (void)setContextRepresentationLabel:(id)arg1;
- (BOOL)useSlidingColumn;
- (id)addFocusActionColumn:(id)arg1 title:(id)arg2 isOutlineColumn:(BOOL)arg3 initialWidth:(double)arg4;
- (id)addColumn:(id)arg1 weightIndex:(unsigned long long)arg2 title:(id)arg3 datacell:(id)arg4 isOutlineColumn:(BOOL)arg5 initialWidth:(double)arg6 hidden:(BOOL)arg7;
- (id)addColumn:(id)arg1 title:(id)arg2 datacell:(id)arg3 isOutlineColumn:(BOOL)arg4 initialWidth:(double)arg5 hidden:(BOOL)arg6;
- (void)_libColorChanged:(id)arg1;
- (void)_addDefaultColumns;
- (void)_addCallTreeColumn;
- (void)viewDidMoveToWindow;
- (void)setupView;
- (void)setColumnSetupBlock:(CDUnknownBlockType)arg1;
- (void)keyDown:(id)arg1;
- (void)setPreferenceOptions:(id)arg1;
- (id)preferenceOptions;
- (void)dealloc;
- (id)initWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
*/