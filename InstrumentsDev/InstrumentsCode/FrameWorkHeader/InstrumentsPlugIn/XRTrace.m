//
//  XRTrace.m
//  MacDemoNew
//
//  Created by yangfl on 2016/12/27.
//  Copyright © 2016年 szzc. All rights reserved.
//

#import "XRTrace.h"
/*
@implementation XRTrace

@end
 */
#if marks


#pragma mark - startCommandWithPurpose:

char -[XRTrace startCommandWithPurpose:](void * self, void * _cmd, int arg2) {
    var_128 = arg2;
    r14 = self;
    var_30 = *___stack_chk_guard;
    r12 = _objc_msgSend;
    r13 = [[self instrumentCommand] retain];
    r15 = @selector(setCommandPurpose:);
    _objc_msgSend(r13, r15);
    rbx = [[r14 recordingOptions] retain];
    rdx = rbx;
    [r13 setRecordingOptions:rdx];
    [rbx release];
    if ([r14 canPerformCommand] != 0x0) {
        var_120 = r13;
        if (r14->_verbose != 0x0) {
            r15 = *___stderrp;
            objc_retainAutorelease(@"Preparing To Start Trace");
            rcx = [@"Preparing To Start Trace" cStringUsingEncoding:0x1];
            rdx = rcx;
            fprintf(r15, "Instruments : %s\n", rdx);
        }
        r13 = @selector(defaultCenter);
        rbx = [(r12)(@class(NSNotificationCenter), r13, rdx, rcx) retain];
        (r12)(rbx, @selector(addObserver:selector:name:object:), r14, @selector(_runDidEnd:), @"PFTRunDidEndNotification", 0x0);
        [rbx release];
        (r12)(var_120, @selector(markStart), r14, @selector(_runDidEnd:));
        r12 = [(r12)(r14, @selector(basicInstruments), r14, @selector(_runDidEnd:)) retain];
        r15 = [r14 retain];
        var_88 = r15;
        rax = [var_120 retain];
        var_130 = rax;
        var_80 = rax;
        __enumerateUniqueDevices(r12, __NSConcreteStackBlock);
        [r12 release];
        if (*(int8_t *)(0x18) != 0x0) {
            r14 = 0x0;
        }
        else {
            r12 = [[r15 coreSpace] retain];
            rbx = [_objc_msgSend(@class(NSNotificationCenter), r13) retain];
            [rbx postNotificationName:@"XRTraceWillStartNotification" object:r15];
            [rbx release];
            if (var_128 != 0x0) {
                if (r14->_verbose != 0x0) {
                    r14 = *___stderrp;
                    objc_retainAutorelease(@"Starting Instrument(s)");
                    rcx = [@"Starting Instrument(s)" cStringUsingEncoding:0x1];
                    fprintf(r14, "Instruments : %s\n", rcx);
                }
                [r15 _enableLiveSymbolicatorServiceForAllDevices:0x1];
                var_128 = r12;
                var_D0 = 0x0;
                xmm0 = zero_extend_64(___Block_byref_object_dispose_);
                intrinsic_movdqu(var_C0, intrinsic_punpcklqdq(zero_extend_64(___Block_byref_object_copy_), xmm0));
                r14 = [[r15 basicInstruments] retain];
                var_E0 = *(var_D0 + 0x28);
                r13 = @selector(prepareCommand:error:);
                r12 = _objc_msgSend(r14, r13);
                objc_storeStrong(var_D0 + 0x28, var_E0);
                [r14 release];
                if (r12 != 0x0) {
                    r14 = @selector(recordingInstruments);
                    r12 = [_objc_msgSend(r15, r14) retain];
                    var_E8 = *(var_D0 + 0x28);
                    r13 = _objc_msgSend(r12, r13);
                    objc_storeStrong(var_D0 + 0x28, var_E8);
                    [r12 release];
                    if (r13 != 0x0) {
                        [r15 _recordRunInformation];
                        r12 = [r15->_instrumentCommand runNumber];
                        rbx = @selector(refreshBindingSolutionForNextRun);
                        while (r15->_needsBindingSolutionForNextRun != 0x0) {
                            _objc_msgSend(r15, rbx);
                        }
                        r13 = [r15 retain];
                        var_F8 = r13;
                        rax = [var_128 afterOperation:0x0 accessDirectory:__NSConcreteStackBlock];
                        rax = [rax retain];
                        var_138 = rax;
                        rax = [r13 installExistenceProjectorsAfterOperation:rax];
                        rax = [rax retain];
                        [rax release];
                        [var_138 waitUntilFinished];
                        [r13 _startRecordingIntoAnalysisCore];
                        rdx = *(var_D0 + 0x28);
                        if (rdx != 0x0) {
                            rbx = 0x1;
                            [r13 reportError:rdx];
                        }
                        else {
                            rbx = [[r13 basicInstruments] retain];
                            __enumerateUniqueDevices(rbx, void ^(void * _block, void * arg1, void * arg2, char * arg3) {
                                rbx = objc_retainAutorelease([[arg2 platformVersionForMessageTracer] retain]);
                                rax = [rbx UTF8String];
                                _XRMessageTracerPlatformRecordingStart(rax);
                                rdi = rbx;
                                [rdi release];
                                return;
                            });
                            [rbx release];
                            rbx = [[r13 basicInstruments] retain];
                            [rbx startCommand:var_130];
                            [rbx release];
                            rbx = [_objc_msgSend(r13, r14) retain];
                            [rbx startCommand:var_130];
                            [rbx release];
                            r14 = [[var_130 recordingOptions] retain];
                            if ([r14 isImmediate] != 0x0) {
                                xmm0 = intrinsic_movsd(xmm0, *0x1499c0);
                                rax = [NSTimer scheduledTimerWithTimeInterval:xmm0 target:r13 selector:@selector(_runTimerTickFireMethod:) userInfo:0x0 repeats:0x1];
                                rax = [rax retain];
                                rdi = r13->_timerTick;
                                r13->_timerTick = rax;
                                [rdi release];
                                xmm0 = intrinsic_movsd(xmm0, *0x149c78);
                                rax = [NSTimer scheduledTimerWithTimeInterval:xmm0 target:r13 selector:@selector(_runTimerHalfTickFireMethod:) userInfo:0x0 repeats:0x1];
                                rax = [rax retain];
                                rdi = r13->_timerHalfTick;
                                r13->_timerHalfTick = rax;
                                [rdi release];
                            }
                            rbx = @selector(timeLimit);
                            if (_objc_msgSend(r14, rbx) != 0x0) {
                                rax = _objc_msgSend(r14, rbx);
                                rdx = HIQWORD((rax >> 0x9) * 0x44b82fa09b5a53);
                                rax = [NSTimer scheduledTimerWithTimeInterval:intrinsic_cvtsi2sd(xmm0, rdx >> 0xb) target:r13 selector:@selector(_runTimerLimitReached:) userInfo:0x0 repeats:0x0];
                                rax = [rax retain];
                                rdi = r13->_timeLimitTimer;
                                r13->_timeLimitTimer = rax;
                                [rdi release];
                            }
                            [r14 release];
                            rbx = 0x0;
                        }
                        [var_138 release];
                        [var_F8 release];
                    }
                    else {
                        [r15 endCommand];
                        rax = var_D0;
                        if (*(rax + 0x28) == 0x0) {
                            r12 = [[NSDictionary dictionaryWithObjects:@"Error Starting Recording" forKeys:*_NSLocalizedDescriptionKey count:0x1] retain];
                            rax = [NSError errorWithDomain:@"com.apple.instruments" code:0x1 userInfo:r12];
                            rax = [rax retain];
                            rdi = *(var_D0 + 0x28);
                            *(var_D0 + 0x28) = rax;
                            [rdi release];
                            [r12 release];
                            rax = var_D0;
                        }
                        rax = [*(rax + 0x28) code];
                        rbx = 0x1;
                        if (rax != 0x0) {
                            [r15 reportError:*(var_D0 + 0x28)];
                        }
                    }
                }
                else {
                    [r15 endCommand];
                    rax = var_D0;
                    if (*(rax + 0x28) == 0x0) {
                        r12 = [[NSDictionary dictionaryWithObjects:@"Error Starting Recording" forKeys:*_NSLocalizedDescriptionKey count:0x1] retain];
                        rax = [NSError errorWithDomain:@"com.apple.instruments" code:0x1 userInfo:r12];
                        rax = [rax retain];
                        rdi = *(var_D0 + 0x28);
                        *(var_D0 + 0x28) = rax;
                        [rdi release];
                        [r12 release];
                        rax = var_D0;
                    }
                    rax = [*(rax + 0x28) code];
                    rbx = 0x1;
                    if (rax != 0x0) {
                        [r15 reportError:*(var_D0 + 0x28)];
                    }
                }
                _Block_object_dispose(0x0, 0x8);
                [0x0 release];
                r13 = @selector(defaultCenter);
                r12 = var_128;
                if (rbx != 0x0) {
                    r14 = 0x0;
                }
                else {
                    rbx = [_objc_msgSend(@class(NSNotificationCenter), r13) retain];
                    [rbx postNotificationName:@"XRTraceDidStartNotification" object:r15];
                    [rbx release];
                    r14 = 0x1;
                    [r15 _acquireSuspendToken];
                }
            }
            else {
                rbx = [_objc_msgSend(@class(NSNotificationCenter), r13) retain];
                [rbx postNotificationName:@"XRTraceDidStartNotification" object:r15];
                [rbx release];
                r14 = 0x1;
                [r15 _acquireSuspendToken];
            }
            [r12 release];
        }
        [var_80 release];
        [var_88 release];
        _Block_object_dispose(0x0, 0x8);
        rdi = var_120;
    }
    else {
        r14 = 0x0;
        _objc_msgSend(r13, r15);
        rdi = r13;
    }
    [rdi release];
    if (*___stack_chk_guard == var_30) {
        rax = r14 & 0xff;
    }
    else {
        rax = __stack_chk_fail();
    }
    return rax;
}

#pragma mark - instrumentCommand


void * -[XRTrace instrumentCommand](void * self, void * _cmd) {
    rbx = self;
    rdi = rbx->_instrumentCommand;
    if (rdi == 0x0) {
        rax = [PFTInstrumentCommand alloc];
        rax = [rax initForCommandLine:sign_extend_64(*(int8_t *)_sRunningFromCommandLine) andTrace:rbx];
        rdi = rbx->_instrumentCommand;
        rbx->_instrumentCommand = rax;
        [rdi release];
        rdi = rbx->_instrumentCommand;
    }
    rax = objc_retainAutoreleaseReturnValue(rdi);
    return rax;
}

#pragma mark - setInstrumentCommand:

void -[XRTrace setInstrumentCommand:](void * self, void * _cmd, void * arg2) {
    rax = [arg2 retain];
    rdi = self->_instrumentCommand;
    self->_instrumentCommand = rax;
    [rdi release];
    return;
}

#endif
