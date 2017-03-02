//
//  XRAnalysisCoreTableViewController.h
//  MacDemoNew
//
//  Created by yangfl on 2017/1/10.
//  Copyright © 2017年 szzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XRAnalysisCoreTableViewRow.h"

/*
@interface XRAnalysisCoreTableViewController : NSObject

@end
*/

/*
@interface XRAnalysisCoreTableViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource, NSMenuDelegate, DTRenderableContentProviderDelegate, XRFilteredDataSource>
{
    BOOL _responseStale;
    BOOL _responseMustBeStaged;
    BOOL _canSubmit;
    XRActionContext *_actionContext;
    struct DTRenderableContentResponse *__response;
    XRAnalysisCoreTableViewControllerProvider *_provider;
    struct DTRenderableContentResponse *_stagedResponse;
    XRAnalysisCoreTableViewContent *_viewsAbstractContent;
    NSIndexSet *_selectedRows;
    NSArray *_sortDescriptors;
    XRAnalysisCoreFullTextSearchSpec *_fullTextSearchPrototype;
    unsigned long long _documentsInspectionTime;
    NSString *_focusedName;
    id <XRAnalysisCoreTableViewControllerDelegate> _delegate;
    NSArray *_extendedDetailForCurrentSelection;
    NSTableView *_tableView;
    XRDetailViewSplashViewController *_splashController;
    XRAnalysisCoreTableViewColumnList *_columns;
    struct XRTimeRange _focusedTimeRange;
}

@property(retain, nonatomic) XRAnalysisCoreTableViewColumnList *columns; // @synthesize columns=_columns;
@property(retain, nonatomic) XRDetailViewSplashViewController *splashController; // @synthesize splashController=_splashController;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *extendedDetailForCurrentSelection; // @synthesize extendedDetailForCurrentSelection=_extendedDetailForCurrentSelection;
@property(nonatomic) __weak id <XRAnalysisCoreTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *focusedName; // @synthesize focusedName=_focusedName;
@property(nonatomic) struct XRTimeRange focusedTimeRange; // @synthesize focusedTimeRange=_focusedTimeRange;
- (void).cxx_destruct;
- (void)copy:(id)arg1;
- (void)_setDocumentTimeFilter:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (id)_indexesToProcessForContextMenu;
- (void)_prepareFocusChange:(id)arg1;
- (id)selectedSearchContext;
- (id)searchContexts;
- (void)filterDetailWithTokens:(id)arg1 context:(id)arg2 matchesAny:(BOOL)arg3;
- (void)_requeryAnalysisCoreWithShortDescription:(id)arg1;
- (void)restoreUIState:(id)arg1;
- (void)saveUIState:(id)arg1;
- (id)_computeExtendedDetailForCurrentSelection;
- (id)_objectForStackDataElement:(id)arg1;
- (void)setDocumentInspectionTime:(unsigned long long)arg1;
- (void)providerHasNewResponse:(id)arg1;
- (void)_retrieveResponse;
- (void)_handleNewResponse:(struct DTRenderableContentResponse *)arg1;
- (void)_moveSelectionToInspectionTimeWithOptions:(unsigned long long)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)didResymbolicate:(id)arg1;
- (void)refresh;
- (void)viewWillLayout;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (void)setRepresentedObject:(id)arg1;
- (void)_changeRepresentedObjectFrom:(id)arg1 to:(id)arg2;
- (void)_adaptTableViewToContent:(id)arg1;
- (id)_requestFromAbstract:(id)arg1;
- (id)_createSpecForTableID:(unsigned int)arg1 core:(id)arg2;
- (void)_submitRequest:(id)arg1 shortDescription:(id)arg2 longDescription:(id)arg3;
- (struct DTRenderableContentResponse *)_lastResponse;
- (struct DTRenderableContentResponse *)_currentResponse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
*/
