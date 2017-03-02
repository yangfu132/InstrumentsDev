//
//  XRAnalysisCoreDetailViewController.m
//  MacDemoWindow
//
//  Created by yangfl on 2016/12/23.
//  Copyright © 2016年 yangfuliang. All rights reserved.
//

#import "XRAnalysisCoreCallTreeViewController.h"
/*
@implementation XRAnalysisCoreCallTreeViewController
@end
 */


/*
断点 initWithDevice:trace:runNumber:weightCount:
断点  XRAnalysisCoreProjectionCursorReset
*/


#pragma mark - _mainThreadAdaptCallTree
/*
//r15 = XRAnalysisCoreCallTreeViewController
- (void) _mainThreadAdaptCallTree
{
    //r14 = XRAnalysisCoreProjectionViewContent
    //r13 = XRAnalysisCoreCallTreeViewController
    //r12 = 120
    
    //0x100591176 <+20>: movq   %rdi, %r15
    r15 = self;
    
    if ([self isViewLoaded] != 0x0) {
        
        //var_80
        XRAnalysisCoreProjectionViewContent* theViewContent = [self representedObject];
        //rbx = theViewContent;
        if (theViewContent != 0x0) {
            
            
            XRTrace* theXRTrace = [[theViewContent trace] retain];
            //XRAnalysisCoreProjectionViewContent:XRAnalysisCoreDetailViewContent
            //XRAnalysisCoreDetailViewContent 有个属性是trace
            //r14 = XRTrace
            
            //调试的时候出现代码中没有的命令 NSIndexPath {length = 1, path = 3979}
            
            NSInteger nRunNumber = [theViewContent runNumber];
            
            //rbx = XRAnalysisCoreProjectionViewContent
            //XRAnalysisCoreProjectionViewContent:XRAnalysisCoreDetailViewContent
            //XRAnalysisCoreDetailViewContent 有个函数是runNumber
            //返回值2
            
            //var_98
            XRAnalysisCoreUIProjectionDetailSpec* theSpec = [[theViewContent spec] retain];
            //rbx = XRAnalysisCoreProjectionViewContent
            //XRAnalysisCoreProjectionViewContent:XRAnalysisCoreDetailViewContent
            //XRAnalysisCoreDetailViewContent 有个属性XRAnalysisCoreUIProjectionDetailSpec* spec
            //
            
            
            //r12
            PFTInstrumentList* thePFTInstrumentList = [[theXRTrace basicInstruments] retain];
            //返回 PFTInstrumentList
            
            NSString* theInstrumentUUID = [[theViewContent instrumentUUID] retain];
            // 返回 rbx = 20202640-0B46-4698-ADAD-DF54B3ABE816,估计是NSString
            
            //var_88
            XRInstrument* theInstrument = [[thePFTInstrumentList instrumentByUUID:theInstrumentUUID] retain];
            //返回r13 = XRInstrument
            
            [rbx release];
            [r12 release];
            
            //r14
            XRRun* theRun = [[theInstrument runFromRunNumber:nRunNumber] retain];
            
            //var_A8
            //XRAnalysisCoreProjectorForTables : XRAnalysisCoreProjector
            XRAnalysisCoreProjectorForTables* theXRAnalysisCoreProjector = [self->_projector retain];
            
            //XRMultiProcessBacktraceRepository *_backtraceRepository;
            if (self->_backtraceRepository == 0x0) {
                //rax rbx
                XRAnalysisCoreProjectorSpec* theXRAnalysisCoreProjectorSpec2 = [theXRAnalysisCoreProjector spec];
                
                
                //var_B8
                ///
                 是按位或运算符 & 是按位与运算符 ^ 是按位异或运算符
                 把number转换为二进制，只取最低的8位（bit）。因为0xff二进制就是1111 1111。
                 & 运算是，如果对应的两个bit都是1，则那个bit结果为1，否则为0.
                 比如 1010 & 1101 = 1000 （二进制）
                 由于0xff最低的8位是1，因此number中低8位中的&之后，如果原来是1，结果还是1，原来是0，结果位还是0.高于8位的，0xff都是0，所以无论是0还是1，结果都是0。
                 ///
                NSInteger theDependentVariableCount = [theXRAnalysisCoreProjectorSpec2 dependentVariableCount] & 0xff;
                //dependentVariableCount 返回 3
                
                [rbx release];
                
                //var_C0 <XRMultiProcessBacktraceRepository: 0x119b578b0>
                XRMultiProcessBacktraceRepository *theXRMultiProcessBacktraceRepository = [XRMultiProcessBacktraceRepository alloc];
                
                //rax
                XRDevice* theXRDevice = [theRun device];
                
                var_A0 = theRun;
                r14 = theXRDevice;
                
                //rbx
                XRTrace* theXRTrace2 = [[theViewContent trace] retain];
                
                //rax
                NSIteger theRunNumber2 = [theViewContent runNumber];
                
                //rax
                theXRMultiProcessBacktraceRepository = [theXRMultiProcessBacktraceRepository initWithDevice:theXRDevice trace:theXRTrace2 runNumber:theRunNumber2 weightCount:theDependentVariableCount];
                
                //rdi
                XRMultiProcessBacktraceRepository* theXRMultiProcessBacktraceRepository2 = self->_backtraceRepository;
                
                self->_backtraceRepository = theXRMultiProcessBacktraceRepository;
                
                [theXRMultiProcessBacktraceRepository2 release];
                [theXRTrace2 release];
                
                //rdi
                rdi = theXRDevice;
                
                //r14
                r14 = theRun;
                
                [theXRDevice release];
                
                //rdi
                XRMultiProcessBacktraceRepository* theXRMultiProcessBacktraceRepository3 = self->_backtraceRepository;
                
                [theXRMultiProcessBacktraceRepository3 setCallTreeDataSource:self];
                [self->_backtraceRepository setSymbolicationTiming:0xffffffff];
                [self->_backtraceRepository setSeparateByCategory:0x1];
                [self->_backtraceRepository setShowAllAsCategory:0x0];
                [self->_backtraceRepository applyFocusInformation:r15->_activeFocusInfo];
                //po [0x1198d68f0 rootNode] 为nil
                [self->_backtraceRepository setFirstWeightIsSpecial:0x0];
                //此处开始有rootNode，但是为内容为空
                
                
                //不是nil，但没有内容
                //刷新也没有
                
                
                [self _mainThreadRepoDidReset];
                
                
                //不是nil，但没有内容
                //但是刷新一下就有了
                
            }
            var_A0 = r14;
            objc_initWeak(var_30, r15);
            r12 = r15->_callTreeView;
            rax = [var_98 retain];
            var_98 = rax;
            var_58 = rax;
            rax = [var_A8 retain];
            var_B8 = rax;
            var_50 = rax;
            rax = [var_B0 retain];
            var_A8 = rax;
            var_48 = rax;
            objc_copyWeak(var_40, var_30);
            [r12 setColumnSetupBlock:__NSConcreteStackBlock];
            rbx = [[r15->_callTreeView superview] retain];
            [rbx release];
            
            
            //不是nil，但没有内容
            //但是刷新一下就有了
            
            
            if (rbx == 0x0) {
                [r15->_callTreeScrollView setDocumentView:r15->_callTreeView];
            }
            
            r12 = [[r15->_callTreeView contextRepresentation] retain];
            r14 = r15->_callTreeView;
            rbx = [[r12 contextRootedByContainer:r14] retain];
            [r14 displayContext:rbx];
            
            
            //不是nil，但没有内容
            
            
            [rbx release];
            r14 = r15->_callTreeView;
            rbx = [[var_98 paneTitle] retain];
            [r14 setDetailViewLabel:rbx];
            [rbx release];
            
            
            //不是nil，但没有内容
            //refreshTreeRoot一下就有内容了
            
            [r15->_callTreeView setInstrument:var_88];
            [r15->_callTreeView setBacktraceRepository:r15->_backtraceRepository];
            
            
            //已经有内容了
            
            
            rdi = r15->_callTreeView;
            [rdi setTarget:rdi];
            [r15->_callTreeView setDoubleAction:@selector(defaultViewSymbolAction:)];
            [var_88 updateContext:*_XRConfigurationViewContext];
            rbx = [[XRUISpace sharedInstance] retain];
            [rbx requestLocalNotification:*_XRCallTreeDetailViewSelectionDidChangeNotification object:r15->_callTreeView observer:r15 block:void ^(void * _block, struct XRAnalysisCoreCallTreeViewController * arg1, struct NSNotification * arg2) {
                rbx = [arg1 retain];
                r14 = *_OBJC_IVAR_$_XRAnalysisCoreCallTreeViewController._deferredSelectionUpdateTimer;
                if ([*(rbx + r14) isValid] != 0x0) {
                    r14 = *_OBJC_IVAR_$_XRAnalysisCoreCallTreeViewController._deferredSelectionUpdateTimer;
                    [*(rbx + r14) invalidate];
                }
                rax = [NSTimer scheduledTimerWithTimeInterval:intrinsic_movsd(xmm0, *0x123050) target:rbx selector:@selector(_deferredSelectionTimeout:) userInfo:0x0 repeats:0x0];
                rax = [rax retain];
                rdi = *(rbx + r14);
                *(rbx + r14) = rax;
                [rdi release];
                rdi = rbx;
                [rdi release];
                return;
            }];
            [rbx release];
            
            if ((r15->_categoryDim & 0xff) != 0xff) {
                rcx = r15->_categoryDimName;
                if (rcx != 0x0) {
                    r14 = [[NSString stringWithFormat:@"Separate by %@", rcx] retain];
                }
                else {
                    r14 = @"Separate by Category";
                    [r14 retain];
                }
                [r15->_callTreeView setValue:r14 forDataMiningOption:*_XRCallTreeSeparateByCategoryNameKey];
                [r14 release];
            }
            else {
                r14 = r15->_callTreeView;
                rbx = [@(NO) retain];
                [r14 setValue:rbx forKey:@"separateByCategory"];
                [rbx release];
            }

            rdi = r15->_callTreeView;
            _objc_msgSend(rdi, _objc_release);
            [r15->_backtraceRepository setNeedsForceReloadData:0x1];
            
            [r15->_callTreeView reloadDetailData];
            r14 = r15->_callTreeView;
            rbx = [[var_80 accessibilityTitle] retain];
            [r14 setAccessibilityTitle:rbx];
            [rbx release];
            r14 = r15->_callTreeView;
            rbx = [[var_80 accessibilityLabel] retain];
            [r14 setAccessibilityLabel:rbx];
            [rbx release];
            [r15->_callTreeView setContextRepresentationLabel:@"Root"];
            [r15->_backtraceRepository applyFocusInformation:r15->_activeFocusInfo];
            rdi = r15->_activeFocusInfo;
            r15->_activeFocusInfo = 0x0;
            [rdi release];
            [r12 release];
            objc_destroyWeak(var_40);
            [var_48 release];
            [var_50 release];
            [var_58 release];
            objc_destroyWeak(var_30);
            [var_B8 release];
            [var_A0 release];
            [var_88 release];
            [var_98 release];
            [var_A8 release];
            [var_80 release];
        }
    }
    return;
}

*/

#pragma mark - _mainThreadRepoDidReset

/*
void -[XRAnalysisCoreCallTreeViewController _mainThreadRepoDidReset](void * self, void * _cmd) {
    self->_backtraceAggIdx = 0x1;
    [self->_aggregatorByCategory removeAllObjects];
    rax = [XRIntKeyedDictionary new];
    
    //刷新依然为空
    rdi = self->_wrappers;
    self->_wrappers = rax;
    [rdi release];
 
    //刷新依然为空
    [self _mainThreadFillAggregator];
    return;
}
 */

#pragma mark - _mainThreadFillAggregator

/*
void -[XRAnalysisCoreCallTreeViewController _mainThreadFillAggregator](void * self, void * _cmd) {
    
    r12 = self;
    //r12 : XRAnalysisCoreCallTreeViewController
 
    r15 = [r12->_projector retain];
    //r15 : XRAnalysisCoreProjectorForTables
 
    r13 = [[r12 representedObject] retain];
    //r13 : XRAnalysisCoreProjectionViewContent
 
    rax = [r13 spec];
    rax = [rax retain];
    //rax : XRAnalysisCoreUIProjectionDetailSpec
 
    //r15 : XRAnalysisCoreProjectorForTables
    if (r15 != 0x0) {
        var_70 = rax;
        //空
        rbx = [[var_70 dimensions] retain];
        //空
        var_80 = [rbx count];
        //空
        [rbx release];
        rax = [NSMutableDictionary new];
        var_78 = r13;
        r13 = rax;
        rbx = [[r15 refresh] retain];
        [rbx waitUntilFinished];
        //空
        [rbx release];
        r15 = [r15 retain];
        var_40 = [r12 retain];
        var_38 = r13;
        rdi = r13;
        r13 = var_78;
        r12 = [rdi retain];
        //空
        [r15 access:__NSConcreteStackBlock];
        //空
        [var_38 release];
        [var_40 release];
        [r15 release];
        [r12 release];
        rax = var_70;
    }
    [rax release];
    [r13 release];
    [r15 release];
    return;
}
*/

#pragma mark - [_mainThreadFillAggregator]_block_invoke
 /*
int ___65-[XRAnalysisCoreCallTreeViewController _mainThreadFillAggregator]_block_invoke(int arg0, int arg1, int arg2) {
    r12 = arg1;
    var_A0 = r12;
    r15 = arg0;
    var_110 = r15;
    var_30 = *___stack_chk_guard;
    XRAnalysisCoreProjectionCursorReset(r12, arg1, arg2);
    rdi = *(r15 + 0x20);
    rax = [rdi spec];
    rax = [rax retain];
    var_B0 = rax;
    rax = [rax dependentVariableCount];
    var_98 = rax & 0xff;
    rbx = (rax & 0xff) + 0xffffffffffffffff;
    
    
    r14 = [[XRBacktraceAggregator alloc] initWithTimestamp:0x0 weightCount:rbx];
    
    if ((*(r15 + 0x28)->_categoryDim & 0xff) == 0xff)
        //不等于
    {
        [*(r15 + 0x30) setObject:r14 forKeyedSubscript:@""];
        
    }
    
    var_170 = rsp;
    var_A8 = rbx;
    var_B8 = rsp - (rbx * 0x8 + 0xf & 0xfffffffffffffff0);
    rsp = rsp - (rbx * 0x8 + 0xf & 0xfffffffffffffff0);
    
    if (XRAnalysisCoreProjectionCursorNext(r12) == 0x0) goto loc_116f08;
    //没有跳转
    
    
loc_116a7c:
    
    var_100 = @selector(getThreadDetails:tid:);
    var_118 = @selector(objectForIntegerKey:);
    var_130 = @selector(alloc);
    var_150 = @selector(initWithAnalysisCoreValue:);
    var_158 = @selector(setObject:forIntegerKey:);
    var_138 = @selector(isValid);
    var_140 = @selector(uint32);
    var_148 = @selector(copyWeightArray:outputDeltas:weightCount:sampleCount:sampleCountDelta:);
    var_168 = @selector(countBacktrace:thread:withCount:weights:);
    var_120 = @selector(objectForKey:);
    var_160 = @selector(initWithTimestamp:weightCount:);
    var_128 = @selector(setObject:forKeyedSubscript:);
    goto loc_116b5c;
    
loc_116b5c:
    
    var_C0 = XRAnalysisCoreProjectionCursorBookmark(r12);
    rax = *(r15 + 0x28);
    //rax = <XRAnalysisCoreCallTreeViewController: 0x10e889180>
    
    rcx = rax->_categoryDim & 0xff;
    //rcx = 2
    
    if (rcx != 0xff) {
        XRAnalysisCoreProjectionCursorReadValue(r12, rcx & 0xff, 0x0);
        rdi = *(r15 + 0x30);
        rdx = 0x0;
        
        rbx = [_objc_msgSend(rdi, var_120) retain];
        
        [r14 release];
        
        //rbx = nil
        
        
        if (rbx == 0x0) {
            r14 = _objc_msgSend(_objc_msgSend(@class(XRBacktraceAggregator), var_130, rdx), var_160, 0x0, var_A8);
            [rbx release];
            rbx = r14;
        }
        
        rdi = *(r15 + 0x30);
        
        _objc_msgSend(rdi, var_128);
        
        rax = *(r15 + 0x28);
        //rax = <XRAnalysisCoreCallTreeViewController: 0x10e889180>
        r14 = rbx;
        //r14 = <XRBacktraceAggregator: 0x1281083d0>
        
    }
    
    XRAnalysisCoreProjectionCursorReadValue(r12, rax->_backtraceDim & 0xff, 0x0, *_OBJC_IVAR_$_XRAnalysisCoreCallTreeViewController._backtraceDim);
    
    XRAnalysisCoreProjectionCursorReadValue(r12, *(r15 + 0x28)->_threadDim & 0xff, 0x0, *_OBJC_IVAR_$_XRAnalysisCoreCallTreeViewController._threadDim);
    
    XRAnalysisCoreProjectionCursorReadValue(r12, *(int8_t *)(r15 + 0x38) & 0xff, 0x0);
    
    
    ///
     
     var_100 = @selector(getThreadDetails:tid:);
    ///
    
    
    if (_objc_msgSend(0x0, var_100) == 0x0) goto loc_116ef8;
    //没有跳转
    
loc_116c7a:
    var_E0 = r14;
    rax = *(r15 + 0x28);
    rcx = *_OBJC_IVAR_$_XRAnalysisCoreCallTreeViewController._wrappers;
    rdi = *(rax + rcx);
    r12 = var_C0;
    rdx = r12;
    
    rbx = [_objc_msgSend(rdi, var_118) retain];
    //rbx  = nil
    
    if (rbx == 0x0) {
        r14 = _objc_msgSend(_objc_msgSend(@class(XRBacktraceTypeAdapter), var_130, rdx, rcx), var_150, 0x0, rcx);
        [rbx release];
        _objc_msgSend(*(r15 + 0x28)->_wrappers, var_158, r14, r12);
        rbx = r14;
    }
    var_D8 = rbx;
    if (var_98 < 0x2) goto loc_116e3c;
    //没有跳转
    
loc_116d1e:
    r14 = @selector(projectionIndexForDependentVariableIndex:);
    r15 = @selector(implClass);
    var_C0 = @selector(uint32);
    var_C8 = @selector(uint64);
    var_D0 = @selector(fixedDecimal);
    r12 = 0x0;
    goto loc_116d59;
    
loc_116d59:
    rbx = r12;
    if (rbx >= var_A8) goto loc_117000;
    //没有跳转
    
loc_116d6c:
    r12 = rbx + 0x1;
    rax = _objc_msgSend(var_B0, r14, r12 & 0xff);
    XRAnalysisCoreProjectionCursorReadValue(var_A0, rax & 0xff, 0x0);
    rax = _objc_msgSend(0x0, r15);
    rax = rax & 0xff;
    if (rax > 0x6) goto loc_116e25;
    //没有跳转
    
loc_116da6:
    goto *0x11702c[sign_extend_64(*(int32_t *)(0x11702c + rax * 0x4)) + 0x11702c];
    //goto 0xa87d8b48 具体是哪里我也不知道啊
    //应该是跳到loc_116db6去了
    
loc_11701f:
    rax = abort();
    return rax;
    
loc_116db6:
    xmm0 = intrinsic_punpckldq(zero_extend_64(_objc_msgSend(0x0, var_C8)), *(int128_t *)0x122fa0);
    xmm0 = intrinsic_subpd(xmm0, *(int128_t *)0x122fb0);
    xmm0 = intrinsic_haddpd(xmm0, xmm0);
    *(var_B8 + rbx * 0x8) = intrinsic_movlpd(*(var_B8 + rbx * 0x8), xmm0);
    goto loc_116e25;
    //跳转了
loc_116e25:
    if ((r12 + 0x1 & 0xff) < var_98) goto loc_116d59;
    //跳转了
loc_116e3c:
    r15 = var_110;
    r12 = var_A0;
    r14 = var_E0;
    rbx = var_B8;
    if ((var_D8 != 0x0) && (_objc_msgSend(0x0, var_138) != 0x0)) {
        rax = _objc_msgSend(0x0, var_140);
        r14 = var_D8;
        _objc_msgSend(r14, var_148, rbx, rbx, var_A8, rax, var_64);
        rsp = (rsp - 0x10) + 0x10;
        if (var_64 != 0x0) {
            _objc_msgSend(var_E0, var_168);
        }
        r14 = var_E0;
    }
    [var_D8 release];
    goto loc_116ef8;
    
loc_116ef8:
    if (XRAnalysisCoreProjectionCursorNext(r12) != 0x0) goto loc_116b5c;
    
loc_116f08:
    rdi = *(r15 + 0x28);
    if (rdi->_aggregatorByCategory == 0x0) {
        rax = [NSMutableDictionary new];
        rcx = *(r15 + 0x28);
        rdi = rcx->_aggregatorByCategory;
        rcx->_aggregatorByCategory = rax;
        [rdi release];
        rdi = *(r15 + 0x28);
    }
    rbx = *(r15 + 0x30);
    var_70 = [rdi retain];
    [rbx enumerateKeysAndObjectsUsingBlock:__NSConcreteStackBlock];
    [var_70 release];
    [0x0 release];
    [r14 release];
    [var_B0 release];
    [0x0 release];
    [0x0 release];
    [0x0 release];
    [0x0 release];
    rax = *___stack_chk_guard;
    if (rax != var_30) {
        rax = __stack_chk_fail();
    }
    return rax;
    
loc_116dee:
    xmm0 = intrinsic_cvtsi2sd(xmm0, _objc_msgSend(0x0, var_C0));
    goto loc_116e19;
    
loc_116e19:
    *(var_B8 + rbx * 0x8) = intrinsic_movsd(*(var_B8 + rbx * 0x8), xmm0);
    goto loc_116e25;
    
loc_116e08:
    _objc_msgSend(0x0, var_D0);
    goto loc_116e19;
    
loc_117000:
    rax = __assert_rtn("__65-[XRAnalysisCoreCallTreeViewController _mainThreadFillAggregator]_block_invoke", "/Library/Caches/com.apple.xbs/Sources/Instruments/Instruments-61529/stdui/projection/XRAnalysisCoreCallTreeViewController.m", 0xdc, "weightIdx < weightCount");
    return rax;
}
*/

