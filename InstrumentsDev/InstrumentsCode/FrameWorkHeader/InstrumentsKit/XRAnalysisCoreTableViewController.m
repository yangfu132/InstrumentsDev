//
//  XRAnalysisCoreTableViewController.m
//  MacDemoNew
//
//  Created by yangfl on 2017/1/10.
//  Copyright © 2017年 szzc. All rights reserved.
//
/*
#import "XRAnalysisCoreTableViewController.h"

@implementation XRAnalysisCoreTableViewController

@end
*/

/*
void -[XRAnalysisCoreTableViewController setDocumentInspectionTime:](void * self, void * _cmd, unsigned long long arg2) {
    rdx = arg2;
    r12 = self;
    r15 = _objc_msgSend;
    r14 = [[self representedObject] retain];
    r12->_documentsInspectionTime = rdx;
    rbx = [[r14 personality] retain];
    r13 = [rbx contentChangesWithTimeInspection];
    [rbx release];
    if (r13 != 0x0) {
        r15 = _objc_msgSend;
        rdx = @"Searching...";
        [r12 _requeryAnalysisCoreWithShortDescription:rdx];
        rbx = [[DTResponsiveUIManager sharedInstance] retain];
        [rbx synchronize];
        [rbx release];
        [r12 _retrieveResponse];
    }
    rbx = [(r15)(r14, @selector(personality), rdx) retain];
    r15 = (r15)(rbx, @selector(rowSelectionDoesNotAffectTimeSelection), rdx);
    [rbx release];
    if (r15 == 0x0) {
        [r12 _moveSelectionToInspectionTimeWithOptions:0x1];
    }
    rdi = r14;
    [rdi release];
    return;
}
*/

/*
void -[XRAnalysisCoreTableViewController restoreUIState:](void * self, void * _cmd, void * arg2) {
    var_30 = self;
    r12 = [arg2 retain];
    r15 = [[self representedObject] retain];
    rbx = [[self view] retain];
    [XRContext restorePreservedViewState:rbx attributes:r12];
    [r12 release];
    [rbx release];
    rbx = [[r15 personality] retain];
    r12 = [rbx rowSelectionDoesNotAffectTimeSelection];
    [rbx release];
    if (r12 == 0x0) {
        [var_30 _moveSelectionToInspectionTimeWithOptions:0x0];
    }
    rdi = r15;
    [rdi release];
    return;
}
*/

/*
long long -[XRAnalysisCoreTableViewController numberOfRowsInTableView:](void * self, void * _cmd, void * arg2) {
    r12 = [[self _currentResponse] retain];
    rbx = 0x0;
    if (r12 != 0x0) {
        rax = [r12 status];
        rbx = 0x0;
        if (rax == 0x1) {
            rbx = [[r12 content] retain];
            r13 = [[rbx rows] retain];
            [r13 release];
            [rbx release];
            rbx = 0x0;
            if (r13 != 0x0) {
                r14 = [[r12 content] retain];
                r15 = [_objc_msgSend(r14, _objc_release) retain];
                rbx = [r15 count];
                rdi = r15;
                [rdi release];
                [r14 release];
            }
        }
    }
    [r12 release];
    rax = rbx;
    return rax;
}
*/

/*
struct DTRenderableContentResponse * -[XRAnalysisCoreTableViewController _currentResponse](void * self, void * _cmd) {
    r14 = self;
    rbx = r14->__response;
    if (rbx == 0x0) {
        r14->__response = [r14->_stagedResponse retain];
        [rbx release];
        rbx = r14->__response;
        if (rbx == 0x0) {
            rax = [r14->_provider popLatestContent];
            rax = [rax retain];
            rdi = r14->__response;
            r14->__response = rax;
            [rdi release];
            rbx = r14->__response;
        }
    }
    rdi = rbx;
    rax = objc_retainAutoreleaseReturnValue(rdi);
    return rax;
}
*/


/*
void * -[XRAnalysisCoreTableViewController tableView:rowViewForRow:](void * self, void * _cmd, void * arg2, long long arg3) {
    var_D8 = arg3;
    
    //XRAnalysisCoreTableViewController
    r12 = self;
    r14 = [arg2 retain];
    
    //r13 : DTRenderableContentResponse
    r13 = [[r12 _currentResponse] retain];
    rdx = @"StandardRowView";
    rcx = r12;
 
    r15 = [[r14 makeViewWithIdentifier:rdx owner:rcx] retain];
    if ((r13 != 0x0) && ([r13 status] == 0x1)) {
        var_F0 = r14;
        if (r15 == 0x0) {
            r14 = [XRAnalysisCoreTableViewRow new];
            [r15 release];
            rdx = @"StandardRowView";
            [r14 setIdentifier:rdx];
            r15 = r14;
        }
        var_E0 = r15;
        var_E8 = r13;
        
        //r14 XRAnalysisCoreTableViewControllerResponse
        r14 = [[r13 content] retain];
        r13 = [[r14 rows] retain];
        if (r13 != 0x0) {
            r15 = [[r12 columns] retain];
            [r15 release];
            [r13 release];
            [r14 release];
            if (r15 != 0x0) {
                r15 = [[var_E8 content] retain];
                r14 = [[r15 rows] retain];
                var_80 = [r12 retain];
                [r14 access:__NSConcreteStackBlock];
                [r14 release];
                [r15 release];
                rax = *(0x18);
                rcx = *(int8_t *)(0x18);
                rsi = var_D8;
                if ((rax != 0x7fffffffffffffff) && (rax > 0x0)) {
                    rdx = 0x1;
                    if ((rax + 0xffffffffffffffff != rsi) || (rcx != 0x0)) {
                        rcx = ((rcx == 0x0 ? 0x1 : 0x0) & 0xff) + ((rcx == 0x0 ? 0x1 : 0x0) & 0xff);
                        rdx = 0x0;
                        if (rax == rsi) {
                            rdx = rcx;
                        }
                    }
                }
                else {
                    rcx = ((rcx == 0x0 ? 0x1 : 0x0) & 0xff) + ((rcx == 0x0 ? 0x1 : 0x0) & 0xff);
                    rdx = 0x0;
                    if (rax == rsi) {
                        rdx = rcx;
                    }
                }
                [var_E0 setEdgeDecoration:rdx];
                [var_80 release];
                _Block_object_dispose(0x0, 0x8);
                _Block_object_dispose(0x0, 0x8);
            }
            else {
                [var_E0 setEdgeDecoration:0x0];
            }
        }
        else {
            [r13 release];
            [r14 release];
            [var_E0 setEdgeDecoration:0x0];
        }
        r13 = var_E8;
        r14 = [[r13 content] retain];
        r15 = [[r14 rows] retain];
        rbx = [r15 count];
        [r15 release];
        [r14 release];
        if (rbx > var_D8) {
            r14 = [[r13 content] retain];
            r12 = [[r14 rows] retain];
            r15 = [var_E0 retain];
            [r12 access:__NSConcreteStackBlock];
            [r12 release];
            [r14 release];
            [r15 release];
            r14 = var_F0;
        }
        else {
            r15 = var_E0;
            [r15 setSignature:0x8000000000000000];
            r14 = var_F0;
        }
    }
    else {
        [r15 setSignature:0x8000000000000000, rcx];
        [r15 setEdgeDecoration:0x0, rcx];
    }
    [r13 release];
    [r14 release];
    rdi = r15;
    rax = [rdi autorelease];
    return rax;
}
*/
