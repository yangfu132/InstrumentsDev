//
//  XRStrategiesToolbarItem.m
//  MacDemoNew
//
//  Created by yangfl on 2017/1/13.
//  Copyright © 2017年 szzc. All rights reserved.
//

#import "XRStrategiesToolbarItem.h"
/*
@implementation XRStrategiesToolbarItem

@end
*/

/*
void * -[XRStrategiesToolbarItem _create1010AndLaterControl](void * self, void * _cmd) {
    var_30 = *___stack_chk_guard;
    rax = [XRTheme imageNamed:@"strategyCPUTemplate"];
    rax = [rax retain];
    var_70 = rax;
    r13 = [[XRTheme imageNamed:@"strategyInstrumentsTemplate"] retain];
    var_80 = r13;
    rbx = [[XRTheme imageNamed:@"strategyThreadsTemplate"] retain];
    var_88 = rbx;
    var_78 = [[rax dvt_cachedAlternateImageFromTemplate] retain];
    r14 = [[r13 dvt_cachedAlternateImageFromTemplate] retain];
    var_90 = r14;
    r12 = [[rbx dvt_cachedAlternateImageFromTemplate] retain];
    var_98 = r12;
    rbx = [[NSArray arrayWithObjects:var_70 count:0x3] retain];
    var_A0 = rbx;
    rax = [NSArray arrayWithObjects:var_78 count:0x3];
    rax = [rax retain];
    var_A8 = rax;
    r13 = [[XRToolbarSegmentedControl toolbarSegmentedControlWithTrackingMode:0x1 images:rbx alternateImages:rax] retain];
    [r13 setBordered:0x1];
    [XRToolbarSegmentedControl borderedSegmentedControlSegmentWidth];
    var_68 = intrinsic_movsd(var_68, xmm0);
    if ([r13 segmentCount] != 0x0) {
        r12 = @selector(setWidth:forSegment:);
        rbx = @selector(segmentCount);
        r14 = 0x0;
        do {
            xmm0 = intrinsic_movsd(xmm0, var_68);
            rdx = r14;
            _objc_msgSend(r13, r12, rdx);
            r14 = r14 + 0x1;
        } while (r14 < _objc_msgSend(r13, rbx, rdx));
    }
    [r13 sizeToFit];
    [var_A8 release];
    [var_A0 release];
    [var_98 release];
    [var_90 release];
    [var_78 release];
    [var_88 release];
    [var_80 release];
    [var_70 release];
    if (*___stack_chk_guard == var_30) {
        rdi = r13;
        rax = [rdi autorelease];
    }
    else {
        rax = __stack_chk_fail();
    }
    return rax;
}
*/
