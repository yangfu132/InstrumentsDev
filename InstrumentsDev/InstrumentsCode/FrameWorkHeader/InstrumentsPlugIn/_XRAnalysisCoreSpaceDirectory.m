//
//  _XRAnalysisCoreSpaceDirectory.m
//  MacDemoNew
//
//  Created by yangfl on 2016/12/27.
//  Copyright © 2016年 szzc. All rights reserved.
//

#import "_XRAnalysisCoreSpaceDirectory.h"

/*
@implementation _XRAnalysisCoreSpaceDirectory

@end
 */

/*
int __newCoreForNextRun(int arg0) {
    r12 = [arg0 retain];
    r14 = [[arg0 pathManager] retain];
    var_30 = r14;
    rax = [XRAnalysisCore alloc];
    rcx = @"currentRun/core";
    rdx = r14;
    r14 = _objc_msgSend;
    r15 = [rax initWithPathManager:rdx dataSubpath:rcx];
    r13 = objc_loadWeakRetained(arg0 + *_OBJC_IVAR_$__XRAnalysisCoreSpaceDirectory._space);
    [r12 release];
    if (r13 != 0x0) {
        r12 = [[r13 notificationCenter] retain];
        rbx = [[r13 notificationCenterQueue] retain];
        rdx = r12;
        rcx = rbx;
        [r15 setNotificationCenter:rdx queue:rcx];
        [rbx release];
        [r12 release];
        r14 = _objc_msgSend;
    }
    rbx = [(r14)(r13, @selector(errorResponder), rdx, rcx) retain];
    (r14)(r15, @selector(setErrorResponder:), rbx, rcx);
    [rbx release];
    [r13 release];
    [var_30 release];
    [r15 autorelease];
    rax = r15;
    return rax;
}
*/

/*
void * -[_XRAnalysisCoreSpaceDirectory initWithSpace:pathManager:](void * self, void * _cmd, void * arg2, void * arg3) {
    r13 = [arg2 retain];
    r15 = [arg3 retain];
    rbx = [[self super] init];
    if (rbx != 0x0) {
        objc_storeWeak(rbx + *_OBJC_IVAR_$__XRAnalysisCoreSpaceDirectory._space, r13);
        rax = [r15 retain];
        rdi = rbx->_pathMan;
        rbx->_pathMan = rax;
        var_40 = r13;
        [rdi release];
        rax = [XRIntKeyedDictionary new];
        rdi = rbx->_coresByRunNumber;
        rbx->_coresByRunNumber = rax;
        [rdi release];
        rax = [XRIntKeyedDictionary new];
        rdi = rbx->_errorRespondersByRunNumber;
        rbx->_errorRespondersByRunNumber = rax;
        [rdi release];
        rax = __newCoreForNextRun(rbx);
        rax = [rax retain];
        rdi = rbx->_coreForNextRun;
        rbx->_coreForNextRun = rax;
        [rdi release];
        r13 = var_40;
    }
    [r15 release];
    [r13 release];
    rax = rbx;
    return rax;
}
*/
