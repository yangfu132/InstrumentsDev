//
//  XRTemplateChooserWindowController.h
//  MacDemoWindow
//
//  Created by yangfl on 2016/12/16.
//  Copyright © 2016年 yangfuliang. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
@interface XRTemplateChooserWindowController : NSObject

@end
 */


/*
 @interface XRTemplateChooserWindowController : NSWindowController <XRDeviceObserver, NSPathControlDelegate, NSTableViewDataSource, NSTableViewDelegate, NSTextFieldDelegate, NSWindowDelegate, NSCollectionViewDelegate>
 {
 XRTemplateChooserTargetedObject *_itemContext;
 NSString *_filterString;
 NSMutableArray *_categories;
 NSMutableArray *_currentCategory;
 NSMutableArray *_currentTextFilteredCategory;
 id _eventMonitor;
 BOOL _canChangeDeviceAndProcess;
 BOOL _validTemplateSelection;
 NSString *_selectedTemplatePath;
 NSDictionary *_plistData;
 XRRecentArrayStoredPrefs *_recentTemplatesArray;
 long long _selectedCategory;
 NSView *_mainView;
 NSView *_targetSearchContainer;
 XRTargetChooserPathControl *_targetChooserPathControl;
 NSButton *_chooseButton;
 NSButton *_profileButton;
 NSButton *_cancelButton;
 NSButton *_openExistingButton;
 DVTScopeBarButton *_standardButton;
 DVTScopeBarButton *_recentButton;
 DVTScopeBarButton *_customButton;
 DVTSearchField *_searchField;
 NSCollectionView *_templateCollectionView;
 NSImageView *_selectedTemplateImage;
 NSTextField *_selectedTemplateName;
 NSTextField *_selectedTemplateDescription;
 DVTBorderedView *_mainBorderedView;
 DVTBorderedView *_scopeFilterBorderedView;
 DVTBorderedView *_selectedTemplateBorderedView;
 NSScrollView *_templateCollectionScrollView;
 XRTemplateCollectionViewItem *_templateCollectionViewItem;
 XRTemplateItemView *_templateItemView;
 }
 
 @property XRTemplateItemView *templateItemView; // @synthesize templateItemView=_templateItemView;
 @property XRTemplateCollectionViewItem *templateCollectionViewItem; // @synthesize templateCollectionViewItem=_templateCollectionViewItem;
 @property NSScrollView *templateCollectionScrollView; // @synthesize templateCollectionScrollView=_templateCollectionScrollView;
 @property DVTBorderedView *selectedTemplateBorderedView; // @synthesize selectedTemplateBorderedView=_selectedTemplateBorderedView;
 @property DVTBorderedView *scopeFilterBorderedView; // @synthesize scopeFilterBorderedView=_scopeFilterBorderedView;
 @property DVTBorderedView *mainBorderedView; // @synthesize mainBorderedView=_mainBorderedView;
 @property NSTextField *selectedTemplateDescription; // @synthesize selectedTemplateDescription=_selectedTemplateDescription;
 @property NSTextField *selectedTemplateName; // @synthesize selectedTemplateName=_selectedTemplateName;
 @property NSImageView *selectedTemplateImage; // @synthesize selectedTemplateImage=_selectedTemplateImage;
 @property NSCollectionView *templateCollectionView; // @synthesize templateCollectionView=_templateCollectionView;
 @property DVTSearchField *searchField; // @synthesize searchField=_searchField;
 @property DVTScopeBarButton *customButton; // @synthesize customButton=_customButton;
 @property DVTScopeBarButton *recentButton; // @synthesize recentButton=_recentButton;
 @property DVTScopeBarButton *standardButton; // @synthesize standardButton=_standardButton;
 @property NSButton *openExistingButton; // @synthesize openExistingButton=_openExistingButton;
 @property NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
 @property(retain) NSButton *profileButton; // @synthesize profileButton=_profileButton;
 @property(retain) NSButton *chooseButton; // @synthesize chooseButton=_chooseButton;
 @property XRTargetChooserPathControl *targetChooserPathControl; // @synthesize targetChooserPathControl=_targetChooserPathControl;
 @property NSView *targetSearchContainer; // @synthesize targetSearchContainer=_targetSearchContainer;
 @property NSView *mainView; // @synthesize mainView=_mainView;
 @property long long selectedCategory; // @synthesize selectedCategory=_selectedCategory;
 - (void).cxx_destruct;
 - (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
 - (void)templateDoubleClicked:(id)arg1;
 - (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
 - (void)controlTextDidChange:(id)arg1;
 - (void)customButtonClicked:(id)arg1;
 - (void)standardButtonClicked:(id)arg1;
 - (void)recentButtonClicked:(id)arg1;
 - (void)_updateFilterButtons;
 - (void)_filterTemplates;
 - (void)chooseOrProfileClicked:(id)arg1;
 - (void)cancelClicked:(id)arg1;
 - (void)deleteTemplate:(id)arg1;
 - (void)openExistingClicked:(id)arg1;
 - (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
 - (void)_updateChooseProfileButtons;
 - (void)_updateSelectedTemplate;
 - (void)_templateWasDeletedFromPathNotification:(id)arg1;
 - (void)_templateWasAddedToDiskPathNotification:(id)arg1;
 - (void)_refreshTemplates;
 - (void)_loadTemplates;
 - (void)_reconfigurePathControl;
 - (void)_setupPathControl;
 - (void)windowDidLoad;
 - (void)handleDeviceNotification:(id)arg1;
 - (long long)_defaultIntegerForKey:(id)arg1 missingValue:(long long)arg2;
 - (void)_configureWindow;
 - (void)windowWillClose:(id)arg1;
 - (void)close;
 - (id)windowNibName;
 - (id)initWithWindowNibName:(id)arg1 plistData:(id)arg2 device:(id)arg3 process:(id)arg4;
 - (id)initWithWindow:(id)arg1;
 
 // Remaining properties
 @property(readonly, copy) NSString *debugDescription;
 @property(readonly, copy) NSString *description;
 @property(readonly) unsigned long long hash;
 @property(readonly) Class superclass;
 
 @end
 
 */
