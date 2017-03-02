//
//  XRAnalysisCoreSpace.m
//  MacDemoNew
//
//  Created by yangfl on 2016/12/27.
//  Copyright © 2016年 szzc. All rights reserved.
//

#import "XRAnalysisCoreSpace.h"
/*
@implementation XRAnalysisCoreSpace

@end
 */


#pragma mark - initWithSourceURL:errorResponder:

/*
void * -[XRAnalysisCoreSpace initWithSourceURL:errorResponder:](void * self, void * _cmd, void * arg2, void * arg3) {
    r12 = [arg2 retain];
    rbx = [arg3 retain];
    r13 = [[self super] init];
    if (r13 != 0x0) {
        rdi = r13 + *_OBJC_IVAR_$_XRAnalysisCoreSpace._errorResponder;
        var_B0 = rbx;
        objc_storeWeak(rdi, rbx);
        rax = [XRAnalysisCorePathManager alloc];
        var_A8 = r12;
        r15 = [rax initWithBaseURL:r12];
        rbx = [[DVTPlugInManager defaultPlugInManager] retain];
        r12 = [[rbx urlToPrerleasePluginResources] retain];
        [rbx release];
        if (r12 != 0x0) {
            rax = [r15 copyURL:r12 asSubpath:@".prerelease" error:0x0];
            [rax release];
        }
        var_B8 = r12;
        rax = [NSNotificationCenter alloc];
        rax = [rax init];
        rdi = r13->_notificationCenter;
        r13->_notificationCenter = rax;
        [rdi release];
        objc_initWeak(var_40, r13);
        r15 = r13->_notificationCenter;
        r12 = *_OBJC_IVAR_$_XRSpace._queue;
        rbx = *(r13 + r12);
        objc_copyWeak(var_48, var_40);
        rax = [r15 addObserverForName:0x0 object:0x0 queue:rbx usingBlock:__NSConcreteStackBlock];
        rax = [rax retain];
        rdi = r13->_observationToken;
        r13->_observationToken = rax;
        [rdi release];
        [*(r13 + r12) setQualityOfService:0x19];
        rbx = [r13 retain];
        var_78 = rbx;
        r14 = [_objc_release retain];
        rbx = [[rbx afterOperation:0x0 block:__NSConcreteStackBlock] retain];
        [rbx waitUntilFinished];
        [rbx release];
        [r14 release];
        [var_78 release];
        objc_destroyWeak(var_48);
        objc_destroyWeak(var_40);
        [var_B8 release];
        [r14 release];
        r12 = var_A8;
        rbx = var_B0;
    }
    [rbx release];
    [r12 release];
    rax = r13;
    return rax;
}
*/

#pragma mark - initWithSourceURL:errorResponder:_block_invoke

/*
void ___56-[XRAnalysisCoreSpace initWithSourceURL:errorResponder:]_block_invoke(int arg0, int arg1) {
    rbx = arg0;
    rax = [arg1 retain];
    var_58 = rax;
    r13 = [[rax object] retain];
    if ([r13 isKindOfClass:[XRAnalysisCore class]] != 0x0) {
        r14 = _objc_msgSend;
        r15 = [r13 retain];
        rax = objc_loadWeakRetained(rbx + 0x20);
        var_60 = rax;
        rax = [rax userDataForToken:rax->_directoryTok, *_OBJC_IVAR_$_XRAnalysisCoreSpace._directoryTok];
        rax = [rax retain];
        var_68 = rax;
        if ([rax runNumberForCore:r15] >= 0x0) {
            rax = (r14)(var_58, @selector(userInfo), 0x0, __NSConcreteStackBlock);
            rax = [rax retain];
            var_70 = r15;
            r15 = rax;
            rax = (r14)(r15, @selector(mutableCopy), 0x0, __NSConcreteStackBlock);
            rbx = r14;
            r14 = rax;
            var_80 = r14;
            [r15 release];
            r15 = rbx;
            rbx = [(r15)(@class(NSNumber), @selector(numberWithInteger:), _objc_msgSend, __NSConcreteStackBlock) retain];
            r13 = r13;
            (r15)(r14, @selector(setObject:forKeyedSubscript:), rbx, @"kXRRunNumberNotificationKey");
            [rbx release];
            rbx = [[var_58 name] retain];
            rax = [NSNotification notificationWithName:rbx object:var_60 userInfo:r14];
            r15 = [rax retain];
            rdi = rbx;
            [rdi release];
            r14 = [[XRUISpace sharedInstance] retain];
            var_30 = r15;
            r15 = [r15 retain];
            rax = [r14 afterOperation:0x0 block:__NSConcreteStackBlock];
            rax = [rax retain];
            [rax release];
            [r14 release];
            [var_30 release];
            rdi = r15;
            r15 = var_70;
            [rdi release];
            [var_80 release];
        }
        [var_68 release];
        [var_60 release];
        [r15 release];
    }
    [r13 release];
    [var_58 release];
    return;
}
*/

#pragma mark - initWithSourceURL:errorResponder:_block_invoke_2
/*
void ___56-[XRAnalysisCoreSpace initWithSourceURL:errorResponder:]_block_invoke_2(int arg0) {
    rbx = [[NSNotificationCenter defaultCenter] retain];
    [rbx postNotification:*(arg0 + 0x20)];
    rdi = rbx;
    [rdi release];
    return;
}
*/

#pragma mark - initWithSourceURL:errorResponder:_block_invoke
/*
int ___56-[XRAnalysisCoreSpace initWithSourceURL:errorResponder:]_block_invoke.144(int arg0) {
    r14 = [[_XRAnalysisCoreSpaceDirectory alloc] initWithSpace:*(arg0 + 0x20) pathManager:*(arg0 + 0x28)];
    rax = [*(arg0 + 0x20) storeUserData:r14];
    rax = [rax retain];
    rcx = *(arg0 + 0x20);
    rdi = rcx->_directoryTok;
    rcx->_directoryTok = rax;
    [rdi release];
    rdi = r14;
    rax = [rdi release];
    return rax;
}
*/
