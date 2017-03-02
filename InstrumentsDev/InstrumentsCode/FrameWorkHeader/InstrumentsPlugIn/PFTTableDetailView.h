//
//  PFTTableDetailView.h
//  MacDemoNew
//
//  Created by yangfl on 2017/1/13.
//  Copyright © 2017年 szzc. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
@interface PFTTableDetailView : NSObject

@end
*/

/*
@protocol PFTDetailViewProtocol
- (void)reloadDetailData;
- (NSString *)detailViewLabel;
- (void)setInspectionTimeInSeconds:(double)arg1;
@end
*/

/*
@protocol PFTScalableView
- (struct CGSize)scale;
- (double)setVerticalPercentage:(double)arg1;
- (double)setHorizontalPercentage:(double)arg1;
@end
*/

/*
@interface PFTTableDetailView : NSTableView <PFTScalableView, PFTDetailViewProtocol>
{
    BOOL _isSetup;
    BOOL _shouldSizeToFit;
    BOOL _shouldReorder;
    BOOL _delegateChecked;
    BOOL _delegateResponds;
    struct CGRect _visibleRect;
    long long _selectedRow;
    long long _lastTrackedCellX;
    long long _lastTrackedCellY;
    struct CGRect _lastTrackedRect;
    BOOL _isTracking;
    BOOL _isBeingAddedToWindow;
    NSTableColumn *_trackingColumn;
    NSString *_name;
    NSMutableDictionary *_viewingPreferences;
    NSString *_detailViewLabel;
    XRInstrument *_nonDelegateInstrument;
}

+ (id)_stringForRows:(id)arg1 inView:(id)arg2 delimiter:(unsigned short)arg3;
- (void).cxx_destruct;
- (void)setNonDelegateInstrument:(id)arg1;
- (void)copy:(id)arg1;
- (id)exportableData;
- (void)reloadDetailData;
- (id)detailViewLabel;
- (void)setInspectionTimeInSeconds:(double)arg1;
- (id)instrument;
- (void)setDelegate:(id)arg1;
- (void)setInstrument:(id)arg1;
- (void)startNow:(double)arg1;
- (void)keyDown:(id)arg1;
- (void)drawBackgroundInClipRect:(struct CGRect)arg1;
- (void)setFilterPredicate:(id)arg1;
- (void)setDetailViewLabel:(id)arg1;
- (void)removeAllTableColumns;
- (struct CGSize)scale;
- (double)setVerticalPercentage:(double)arg1;
- (double)setHorizontalPercentage:(double)arg1;
- (void)setVisibilityOfTableColumnWithIdentifier:(id)arg1 hidden:(BOOL)arg2;
- (void)setHighlightedTableColumn:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (BOOL)isBeingAddedToWindow;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)defaultViewSymbolAction:(id)arg1;
- (void)toggleVisibility:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)setupContextMenuForColumns;
- (void)moveColumn:(long long)arg1 toColumn:(long long)arg2;
- (id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2;
- (BOOL)tableDetailView:(id)arg1 shouldDisplayActionInRow:(id)arg2;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (id)addColumn:(id)arg1 weightIndex:(unsigned long long)arg2 title:(id)arg3 datacell:(id)arg4;
- (id)addColumn:(id)arg1 title:(id)arg2 datacell:(id)arg3;
- (id)addActionColumn:(id)arg1 weightIndex:(unsigned long long)arg2 action:(SEL)arg3 target:(id)arg4 title:(id)arg5;
- (id)addActionColumn:(id)arg1 action:(SEL)arg2 target:(id)arg3 title:(id)arg4;
- (id)tableColumnWithIdentifier:(id)arg1 andIndex:(unsigned long long)arg2;
- (long long)columnWithIdentifier:(id)arg1 andIndex:(unsigned long long)arg2;
- (void)dealloc;
- (void)_recordSelectionState;
- (void)setupView;
- (void)setShouldSizeToFit:(BOOL)arg1;
- (id)name;
- (id)initWithName:(id)arg1;

@end
*/
