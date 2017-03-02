//
//  PFTTraceDocument.m
//  MacDemoNew
//
//  Created by yangfl on 2016/12/28.
//  Copyright © 2016年 szzc. All rights reserved.
//

#import "PFTTraceDocument.h"

#if marks

/*
@implementation PFTTraceDocument

@end
 */

#pragma mark - init

void * -[PFTTraceDocument init](void * self, void * _cmd) {
    r13 = [[self super] init];
    if (r13 != 0x0) {
        r15 = [[NSUUID UUID] retain];
        rbx = [[r15 UUIDString] retain];
        [r13 setUuid:rbx];
        [rbx release];
        [r15 release];
        rbx = [[XRLocalDevice localDevice] retain];
        [r13 _setTargetType:0x1 withProcess:0x0 device:rbx preserve:0x0];
        [rbx release];
        rax = [XRBusyModel alloc];
        rax = [rax init];
        rdi = r13->_busyModel;
        r13->_busyModel = rax;
        [rdi release];
        [r13 _updateSupportedStrategies];
        r13->_selectedRunNumber = 0xffffffffffffffff;
        rax = [XRTrace alloc];
        rax = [rax initForCommandLine:0x0];
        rdi = r13->_trace;
        r13->_trace = rax;
        [rdi release];
        [r13->_trace setOwner:r13];
        r14 = r13->_trace;
        rbx = [[r13 uuid] retain];
        [r14 setDocumentUUID:rbx];
        [rbx release];
        [r13->_trace addObserver:r13 forKeyPath:@"workTracker.totalNumberOfWorkItems" options:0x3 context:0x0];
        [r13 addObserver:r13 forKeyPath:@"selectedRunNumber" options:0x3 context:0x0];
        [r13->_trace addObserver:r13 forKeyPath:@"strategyManager.presentStrategies" options:0x0 context:_XRStrategyChangedContext];
        rbx = [[NSNotificationCenter defaultCenter] retain];
        [rbx addObserver:r13 selector:@selector(_willStartCommand:) name:*_XRTraceWillStartNotification object:r13->_trace];
        [rbx release];
        rbx = [[NSNotificationCenter defaultCenter] retain];
        [rbx addObserver:r13 selector:@selector(_didStartCommand:) name:*_XRTraceDidStartNotification object:r13->_trace];
        [rbx release];
        rbx = [[NSNotificationCenter defaultCenter] retain];
        [rbx addObserver:r13 selector:@selector(_willEndCommand:) name:*_XRTraceWillEndNotification object:r13->_trace];
        [rbx release];
        rbx = [[NSNotificationCenter defaultCenter] retain];
        [rbx addObserver:r13 selector:@selector(_didEndCommand:) name:*_XRTraceDidEndNotification object:r13->_trace];
        [rbx release];
        [XRDeviceDiscovery registerDeviceObserver:r13];
        rbx = [[NSNotificationCenter defaultCenter] retain];
        [rbx addObserver:r13 selector:@selector(_tick:) name:*_PFTCoordinationTickNotification object:r13];
        [rbx release];
        rbx = [[NSNotificationCenter defaultCenter] retain];
        [rbx addObserver:r13 selector:@selector(_openDetailViewNotification:) name:*_XRDetailViewRequiredNotification object:0x0];
        [rbx release];
        rbx = [[NSNotificationCenter defaultCenter] retain];
        [rbx addObserver:r13 selector:@selector(_appDidChangeScreenParametersNotification:) name:*_NSApplicationDidChangeScreenParametersNotification object:0x0];
        [rbx release];
        rbx = [[NSNotificationCenter defaultCenter] retain];
        [rbx addObserver:r13 selector:@selector(_runChanged:) name:*_PFTInstrumentRunWasSelectedNotification object:0x0];
        [rbx release];
        rbx = [[NSNotificationCenter defaultCenter] retain];
        [rbx addObserver:r13 selector:@selector(_strategyFilterUpdateNotification:) name:*_XRStrategyControllerFilterChangedNotification object:0x0];
        [rbx release];
        rbx = [[NSNotificationCenter defaultCenter] retain];
        [rbx addObserver:r13 selector:@selector(_instrumentStateChanged:) name:*_PFTInstrumentStateChangedNotification object:0x0];
        [rbx release];
        rax = [PFTSelectedInstrumentList alloc];
        rax = [rax initAndObserve:0x1];
        rdi = r13->_selectedInstruments;
        r13->_selectedInstruments = rax;
        [rdi release];
        [r13->_selectedInstruments setTrace:r13->_trace];
        rax = [XRSelectedInstrumentConfigurationDataElementList alloc];
        rax = [rax init];
        rdi = r13->_instrumentConfigurationModel;
        r13->_instrumentConfigurationModel = rax;
        [rdi release];
        var_40 = r13->_instrumentConfigurationModel;
        rdx = [PFTInstrumentPlugin class];
        r15 = [[NSBundle bundleForClass:rdx] retain];
        rbx = [[r15 localizedStringForKey:rdx value:@"" table:@"Instruments"] retain];
        [var_40 setTitle:rbx];
        rdi = rbx;
        [rdi release];
        [r15 release];
        [r13->_instrumentConfigurationModel setTraceDocument:r13];
        [r13->_instrumentConfigurationModel setSelectedInstrumentList:r13->_selectedInstruments];
        rax = [PFTSelectedInstrumentDataElementList alloc];
        rax = [rax init];
        rdi = r13->_instrumentInspectorModel;
        r13->_instrumentInspectorModel = rax;
        [rdi release];
        var_40 = r13->_instrumentInspectorModel;
        rdx = [PFTInstrumentPlugin class];
        r14 = [[NSBundle bundleForClass:rdx] retain];
        rbx = [[r14 localizedStringForKey:rdx value:@"" table:@"Instruments"] retain];
        [var_40 setTitle:rbx];
        rdi = rbx;
        [rdi release];
        [r14 release];
        [r13->_instrumentInspectorModel setTraceDocument:r13];
        [r13->_instrumentInspectorModel setSelectedInstrumentList:r13->_selectedInstruments];
        rdi = r13->_symbolicationController;
        r13->_symbolicationController = 0x0;
        [rdi release];
        r13->_symbolicationControllerModelIsOutOfDate = 0x1;
    }
    rax = r13;
    return rax;
}

#pragma mark - readFromURL

char -[PFTTraceDocument readFromURL:ofType:error:](void * self, void * _cmd, void * arg2, void * arg3, void * * arg4) {
    r8 = arg4;
    var_48 = r8;
    r12 = self;
    var_38 = [arg2 retain];
    rbx = [arg3 retain];
    r15 = *_OBJC_IVAR_$_PFTTraceDocument._originalURL;
    if (*(r12 + r15) == 0x0) {
        r14 = @selector(isEqual:);
        if (_objc_msgSend(rbx, r14) != 0x0) {
            r15 = *_OBJC_IVAR_$_PFTTraceDocument._originalURL;
            var_40 = rbx;
            rax = PFTNewTraceDocumentURL(var_48);
            rax = [rax retain];
            rdi = *(r12 + r15);
            *(r12 + r15) = rax;
            [rdi release];
            if (*(r12 + r15) != 0x0) {
                r12->_createdViaTemplate = 0x1;
                [r12 setFileType:@"Trace Document"];
                [r12 setFileURL:0x0];
                rdi = r12->_trace;
                rcx = *(r12 + r15);
                rdx = var_38;
                r15 = [rdi loadTemplate:rdx outputURL:rcx preserveRunHistory:0x0 error:_objc_msgSend];
                r13 = [[r12->_trace instrumentCommand] retain];
                r14 = [[r13 defaultExecProcess] retain];
                if (r14 != 0x0) {
                    rdx = r14;
                    [r12 setDefaultProcess:rdx];
                }
                [r12->_trace release];
                [r12 release];
                [r14 release];
                [r13 release];
            }
            else {
                r15 = 0x0;
            }
        }
        else {
            rdx = @"Trace Document";
            rsi = r14;
            if (_objc_msgSend(rbx, rsi) != 0x0) {
                var_40 = rbx;
                rbx = [var_38 retain];
                rdi = *(r12 + r15);
                *(r12 + r15) = rbx;
                [rdi release];
                r14 = *_OBJC_IVAR_$_PFTTraceDocument._trace;
                rdi = *(r12 + r14);
                rcx = 0x0;
                rdx = rbx;
                r15 = [rdi loadDocument:rdx error:rcx];
                rbx = [0x0 retain];
                if (r15 != 0x0) {
                    var_48 = _objc_msgSend;
                    rdi = *(r12 + r14);
                    rbx = _objc_msgSend;
                    r14 = [[rdi instrumentCommand] retain];
                    r13 = [[r14 defaultExecProcess] retain];
                    if (r13 != 0x0) {
                        rdx = 0x1;
                        r8 = 0x0;
                        rcx = r13;
                        [r12 _setTargetType:rdx withProcess:rcx device:r8 preserve:0x0];
                    }
                    (rbx)(r12->_trace, @selector(awakeFromTemplate), rdx, rcx, r8);
                    (rbx)(r12, @selector(_traceDidAwake), rdx, rcx, r8);
                    [r13 release];
                    [r14 release];
                    rbx = var_48;
                }
                else {
                    r14 = var_48;
                    if (r14 != 0x0) {
                        [r12 close];
                        *r14 = objc_retainAutorelease(rbx);
                    }
                }
                [rbx release];
            }
            else {
                var_40 = rbx;
                rbx = var_48;
                if (rbx != 0x0) {
                    r15 = 0x0;
                    *rbx = [[[NSError errorWithDomain:@"com.apple.PerformanceTools" code:0xffffffffffffffff userInfo:0x0] retain] autorelease];
                }
                else {
                    r15 = 0x0;
                }
            }
        }
        [var_40 release];
        [var_38 release];
        rax = sign_extend_64(r15);
    }
    else {
        rax = __assert_rtn("-[PFTTraceDocument readFromURL:ofType:error:]", "/Library/Caches/com.apple.xbs/Sources/Instruments/Instruments-61529/PFTTraceDocument.m", 0x29a, "_originalURL == nil");
    }
    return rax;
}

#pragma mark - startRun

char -[PFTTraceDocument startRun](void * self, void * _cmd) {
    rbx = [[self targetDevice] retain];
    self->_runningTraceConnectionUUID = [rbx connectionCount];
    [rbx release];
    r15 = [self->_trace startCommandWithPurpose:0x1];
    rbx = [[self->_trace instrumentCommand] retain];
    //rbx = Instrument Command (purpose:Idle; output destination:file:///.file/id=6571367.7615829/)
    
    rax = [rbx runNumber];
    //rax = 0
    
    [self setSelectedRunNumber:rax];
    [rbx release];
    rax = sign_extend_64(r15);
    return rax;
}

#endif
