//
//  XRAnalysisCoreProjectionViewController.h
//  MacDemoNew
//
//  Created by yangfl on 2017/1/9.
//  Copyright © 2017年 szzc. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
@interface XRAnalysisCoreProjectionViewController : NSObject

@end
*/

/*
@interface XRAnalysisCoreProjectionViewController : NSViewController <NSOutlineViewDelegate, NSOutlineViewDataSource, DTRenderableContentProviderDelegate>
{
    NSScrollView *_outlineScrollView;
    XRAnalysisCoreOutlineView *_outlineView;
    XRActionContext *_actionContext;
    XRAnalysisCoreProjectionViewContent *_viewsAbstractContent;
    NSArray *_sortDescriptors;
    XRAnalysisCoreRollUpItemSet *_expandedSet;
    XRAnalysisCoreRollUpItemSet *_selectedSet;
    XRTokenizedTextFilterSpecification *_outlineColumnFilterSpec;
    struct DTRenderableContentResponse *__response;
    struct DTRenderableContentResponse *_stagedResponse;
    XRAnalysisCoreProjectionContentProvider *_provider;
    BOOL _responseStale;
    BOOL _responseMustBeStaged;
    BOOL _forceRefreshOnNextUpdate;
    XRAnalysisCoreRollUpItem *_focusedItem;
    NSString *_focusedName;
    XRAnalysisCoreTableQuery *_focusFilter;
}

@property(readonly, nonatomic) XRAnalysisCoreTableQuery *focusFilter; // @synthesize focusFilter=_focusFilter;
@property(readonly, nonatomic) NSString *focusedName; // @synthesize focusedName=_focusedName;
@property(readonly, nonatomic) XRAnalysisCoreRollUpItem *focusedItem; // @synthesize focusedItem=_focusedItem;
- (void).cxx_destruct;
- (void)filterDetailWithTokens:(id)arg1 context:(id)arg2 matchesAny:(BOOL)arg3;
- (void)outlineView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (void)restoreUIState:(id)arg1;
- (void)saveUIState:(id)arg1;
- (void)_mainThreadAdaptOutline:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (id)_requestFromAbstract:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)objectValueForTableColumn:(id)arg1 byItem:(id)arg2;
- (id)_objectValueForTableColumnIdentifier:(id)arg1 response:(struct DTRenderableContentResponse *)arg2 projector:(id)arg3 cursor:(struct XRAnalysisCoreProjectionCursor *)arg4 item:(id)arg5;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)providerHasNewResponse:(id)arg1;
- (void)_handleNewResponse:(struct DTRenderableContentResponse *)arg1;
- (void)_syncOutlineSelectionExpansionState;
- (void)refresh;
- (void)_prepareFocusChange:(id)arg1;
- (void)viewWillLayout;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)loadView;
- (void)copy:(id)arg1;
- (void)_retrieveResponse;
- (void)_submitRequest:(id)arg1 shortDescription:(id)arg2 longDescription:(id)arg3;
- (struct DTRenderableContentResponse *)_lastResponse;
- (struct DTRenderableContentResponse *)_currentResponse;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
*/
