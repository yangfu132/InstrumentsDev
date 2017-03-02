//
//  PFTDetailTypeHostView.m
//  MacDemoNew
//
//  Created by yangfl on 2017/1/9.
//  Copyright © 2017年 szzc. All rights reserved.
//

#import "PFTDetailTypeHostView.h"
/*
@implementation PFTDetailTypeHostView

@end
*/

/*
void -[PFTDetailTypeHostView updateDetailViewWithInstrument:](void * self, void * _cmd, void * arg2) {
    var_38 = [arg2 retain];
    rax = [arg2 viewController];
    rax = [rax retain];
    var_40 = rax;
    r13 = [[rax detailContextContainer] retain];
    r14 = [[arg2 viewController] retain];
    r15 = [[r14 detailContextContainer] retain];
    rbx = [[r15 contextRepresentation] retain];
    r12 = [[r13 viewForContext:rbx] retain];
    [rbx release];
    [r15 release];
    [r14 release];
    [r13 release];
    [var_40 release];
    [self updateInstrument:var_38 withDetailView:r12];
    [var_38 release];
    rdi = r12;
    [rdi release];
    return;
}
*/

/*
void -[PFTDetailTypeHostView updateInstrument:withDetailView:](void * self, void * _cmd, void * arg2, void * arg3) {
    r15 = self;
    var_30 = *___stack_chk_guard;
    r13 = [arg2 retain];
    r12 = [arg3 retain];
    if (r12 != 0x0) {
        rbx = [[r15 targetView] retain];
        [rbx release];
        if (rbx != r12) {
            var_250 = r13;
            rdx = r12;
            var_238 = [r13 detailViewRequiresScrollView:rdx];
            rax = [r15 contentView];
            rax = [rax retain];
            var_228 = rax;
            r13 = [[rax window] retain];
            rbx = [[r13 firstResponder] retain];
            var_218 = rbx;
            var_230 = r15;
            rax = [r15 _innerTargetView];
            rax = [rax retain];
            var_220 = rax;
            r15 = r12;
            [rax release];
            [rbx release];
            rbx = _objc_msgSend;
            [r13 release];
            r12 = r15;
            if (var_238 != 0x0) {
                rbx = _objc_msgSend;
                rdx = [NSScrollView class];
                if ([r12 isKindOfClass:rdx] != 0x0) {
                    r15 = var_230;
                    [r15 setContentView:r12];
                    r14 = var_228;
                    r13 = var_250;
                }
                else {
                    r14 = (rbx)(@class(XRSlidingCapableScrollView), @selector(alloc), rdx);
                    r15 = var_230;
                    [var_170 bounds];
                    r14 = (rbx)(r14, @selector(initWithFrame:), @selector(bounds));
                    [var_228 release];
                    (rbx)(r14, @selector(setBorderType:), 0x0);
                    (rbx)(r15, @selector(setContentView:), r14);
                    xmm0 = intrinsic_movsd(xmm0, *0x122e90);
                    (rbx)(r14, @selector(setLineScroll:), r14);
                    xmm0 = intrinsic_movsd(xmm0, *0x122e90);
                    (rbx)(r14, @selector(setPageScroll:), r14);
                    (rbx)(r14, @selector(setHasHorizontalScroller:), 0x1);
                    (rbx)(r14, @selector(setHasVerticalScroller:), 0x1);
                    (rbx)(r14, @selector(setAutohidesScrollers:), 0x0);
                    rbx = [(rbx)(r14, @selector(contentView), 0x0) retain];
                    if (rbx != 0x0) {
                        [var_190 visibleRect];
                    }
                    else {
                        xmm0 = intrinsic_xorpd(xmm0, xmm0);
                        var_180 = intrinsic_movapd(var_180, xmm0);
                        var_190 = intrinsic_movapd(var_190, xmm0);
                    }
                    r13 = var_250;
                    [_objc_msgSend release];
                    rbx = _objc_msgSend;
                    [r12 setFrame:rdx, rcx];
                    [r14 setDocumentView:r12];
                }
            }
            else {
                r15 = var_230;
                [r15 setContentView:r12];
                r14 = var_228;
                r13 = var_250;
            }
            rdx = *_XRSearchViewContext;
            rcx = 0x1;
            [r13 updateContext:rdx delayed:rcx];
            if (var_218 == var_220) {
                rax = (rbx)(r14, @selector(window), rdx, rcx);
                rax = [rax retain];
                rcx = rbx;
                rbx = rax;
                (rcx)(rbx, @selector(makeFirstResponder:), r12, rcx);
                [rbx release];
            }
            [r14 release];
        }
        var_258 = r12;
        xmm0 = intrinsic_xorpd(xmm0, xmm0);
        intrinsic_movapd(var_1A0, xmm0);
        intrinsic_movapd(var_1B0, xmm0);
        var_1C0 = intrinsic_movapd(var_1C0, xmm0);
        var_1D0 = intrinsic_movapd(var_1D0, xmm0);
        rbx = _objc_msgSend;
        rax = [r15 _shownAccessoryViews];
        rax = [rax retain];
        var_240 = rax;
        r14 = @selector(countByEnumeratingWithState:objects:count:);
        rax = _objc_msgSend(rax, r14);
        var_218 = rax;
        if (rax != 0x0) {
            r14 = _objc_msgSend;
            var_230 = r15;
            var_250 = r13;
            var_238 = *var_1C0;
            var_248 = @selector(countByEnumeratingWithState:objects:count:);
            do {
                var_220 = @selector(setMainView:);
                var_228 = @selector(_innerTargetView);
                r15 = @selector(tryToPerform:with:);
                r12 = 0x0;
                do {
                    if (*var_1C0 != var_238) {
                        objc_enumerationMutation(var_240);
                    }
                    r13 = *(var_1C8 + r12 * 0x8);
                    rbx = [(r14)(var_230, var_228) retain];
                    (r14)(r13, r15, var_220, rbx);
                    [rbx release];
                    r12 = r12 + 0x1;
                } while (r12 < var_218);
                rax = _objc_msgSend(var_240, var_248);
                var_218 = rax;
            } while (rax != 0x0);
            r15 = var_230;
            rbx = r14;
            r14 = var_248;
        }
        else {
            var_250 = r13;
        }
        [var_240 release];
        r15->_ignoreSubviewRemove = 0x1;
        xmm0 = intrinsic_xorpd(xmm0, xmm0);
        intrinsic_movapd(var_1E0, xmm0);
        intrinsic_movapd(var_1F0, xmm0);
        var_200 = intrinsic_movapd(var_200, xmm0);
        var_210 = intrinsic_movapd(var_210, xmm0);
        r12 = r15;
        rax = (rbx)(r15, @selector(_shownAccessoryViews));
        rax = [rax retain];
        var_218 = rax;
        r15 = (rbx)(rax, r14, var_210, var_130, 0x10);
        if (r15 != 0x0) {
            r13 = *var_200;
            var_220 = @selector(countByEnumeratingWithState:objects:count:);
            do {
                rbx = @selector(addSubview:);
                r14 = 0x0;
                do {
                    if (*var_200 != r13) {
                        objc_enumerationMutation(var_218);
                    }
                    _objc_msgSend(r12, rbx);
                    r14 = r14 + 0x1;
                } while (r14 < r15);
                r15 = _objc_msgSend(var_218, var_220);
            } while (r15 != 0x0);
        }
        [var_218 release];
        rbx = r12;
        var_230 = rbx;
        rbx->_ignoreSubviewRemove = 0x0;
        [rbx setNeedsLayout:0x1];
        [rbx setNeedsDisplay:0x1];
        rdx = *_XRConfigurationViewContext;
        r12 = var_250;
        [r12 updateContext:rdx];
        [r12 updateContext:*_XRExtendedEventViewContext];
        r13 = [[rbx _innerTargetView] retain];
        rbx = [[r13 enclosingScrollView] retain];
        rdx = @selector(setVerticalScrollElasticity:);
        r14 = [rbx respondsToSelector:rdx];
        rdi = rbx;
        [rdi release];
        [r13 release];
        if (r14 != 0x0) {
            r14 = [[var_230 _innerTargetView] retain];
            rbx = [[r14 enclosingScrollView] retain];
            [rbx setVerticalScrollElasticity:0x1];
            rdi = rbx;
            [rdi release];
            [r14 release];
            r14 = [[var_230 _innerTargetView] retain];
            rbx = [[r14 enclosingScrollView] retain];
            [rbx setHorizontalScrollElasticity:0x1];
            rdi = rbx;
            [rdi release];
            [r14 release];
        }
    }
    else {
        var_258 = r12;
        var_250 = r13;
        r13 = _objc_msgSend;
        r14 = [[r13 contentView] retain];
        rdx = [NSScrollView class];
        if ([r14 isKindOfClass:rdx] != 0x0) {
            rbx = [[r14 documentView] retain];
            [rbx release];
            if (rbx != 0x0) {
                rbx = [XRSlidingCapableScrollView alloc];
                [var_150 bounds];
                rbx = [rbx initWithFrame:@selector(bounds), rcx];
                [r14 release];
                [rbx setBorderType:0x0];
                [r13 setContentView:rbx];
                xmm0 = intrinsic_movsd(xmm0, *0x122e90);
                [rbx setLineScroll:rbx];
                intrinsic_movsd(xmm0, *0x122e90);
                [rbx setPageScroll:rbx];
                [rbx setHasHorizontalScroller:0x1];
                [rbx setHasVerticalScroller:0x1];
                [rbx setAutohidesScrollers:0x0];
                r14 = rbx;
            }
        }
        else {
            rbx = [XRSlidingCapableScrollView alloc];
            [var_150 bounds];
            rbx = [rbx initWithFrame:@selector(bounds), rcx];
            [r14 release];
            [rbx setBorderType:0x0];
            [r13 setContentView:rbx];
            xmm0 = intrinsic_movsd(xmm0, *0x122e90);
            [rbx setLineScroll:rbx];
            intrinsic_movsd(xmm0, *0x122e90);
            [rbx setPageScroll:rbx];
            [rbx setHasHorizontalScroller:0x1];
            [rbx setHasVerticalScroller:0x1];
            [rbx setAutohidesScrollers:0x0];
            r14 = rbx;
        }
        [r14 release];
        r12 = var_250;
    }
    [var_258 release];
    [r12 release];
    if (*___stack_chk_guard != var_30) {
        __stack_chk_fail();
    }
    return;
}
*/
