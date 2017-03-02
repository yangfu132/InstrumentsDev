//
//  XRTemplateChooserWindowController.m
//  MacDemoWindow
//
//  Created by yangfl on 2016/12/16.
//  Copyright © 2016年 yangfuliang. All rights reserved.
//

#import "XRTemplateChooserWindowController.h"
/*
@implementation XRTemplateChooserWindowController

@end
 */


/*
void -[XRTemplateChooserWindowController openExistingClicked:](void * self, void * _cmd, void * arg2) {
    
    var_60 = [arg2 retain];
    r12 = [[NSOpenPanel openPanel] retain];
    r13 = [[NSBundle bundleForClass:[PFTInstrumentPlugin class]] retain];
    rbx = [[r13 localizedStringForKey:@"Select File to Open" value:@"" table:@"Instruments"] retain];
    [r12 setTitle:rbx];
    [rbx release];
    [r13 release];
    [r12 setDirectoryURL:0x0];
    [r12 setNameFieldStringValue:@""];
    [r12 setAllowedFileTypes:0x0];
    r13 = [[self window] retain];
    r12 = [r12 retain];
    var_30 = [self retain];
    [r12 beginSheetModalForWindow:r13 completionHandler:__NSConcreteStackBlock];
    [r13 release];
    [var_30 release];
    [r12 release];
    [r12 release];
    [var_60 release];
    return;
}
 */

/*
void ___57-[XRTemplateChooserWindowController openExistingClicked:]_block_invoke(int arg0, int arg1) {
    r15 = arg0;
    if (arg1 == 0x1) {
        rdi = *(r15 + 0x20);
        rbx = [[rdi URL] retain];
        r14 = [[NSDocumentController sharedDocumentController] retain];
        r12 = [rbx retain];
        [r14 openDocumentWithContentsOfURL:r12 display:0x1 completionHandler:__NSConcreteStackBlock];

 0x1005605de <+178>: movq   0x28(%r15), %rdi
 /
 rax = 0x0000000053000004
 rbx = 0x0000000111008820   file:///Users/yangfl/Desktop/time.trace
 rcx = 0x0000000114bcc100
 rdx = 0x0000000000000004   4
 rdi = 0x00000001042d8050   <XRTemplateChooserWindowController: 0x1042d8050>
 rsi = 0x0000000053000002
 rbp = 0x00007fff5fbfe650
 rsp = 0x00007fff5fbfe600   <__NSStackBlock__: 0x7fff5fbfe600>
 r8 = 0x003fffffffffffff
 r9 = 0x0000000104529518
 r10 = 0x00007fffb7fd25e8  (void *)0x001dffffb7fd26d9
 r11 = 0x0000000114c48060  NSOpenPanel
 r12 = 0x0000000111008820
 r13 = 0x00007fffb1ac4b40  libobjc.A.dylib`objc_msgSend
 r14 = 0x0000000104526710
 r15 = 0x00000001110df3f0
 rip = 0x00000001005605e2  InstrumentsKit`__57-[XRTemplateChooserWindowController openExistingClicked:]_block_invoke + 182
 rflags = 0x0000000000000202
 cs = 0x000000000000002b
 fs = 0x0000000000000000
 gs = 0x0000000000000000
 /
 
        [*(r15 + 0x28) close];
        [r14 removeTemplateChooser:*(r15 + 0x28)];
        rdi = rbx;
        [rdi release];
        [r12 release];
        [r14 release];
    }
    return;
}
*/

/*
void ___57-[XRTemplateChooserWindowController openExistingClicked:]_block_invoke_2(int arg0, int arg1)
{
    r15 = arg0;
    r13 = [rcx retain];
    if (arg1 == 0x0) {
        if (r13 != 0x0) {
            r14 = [[r13 userInfo] retain];
            rdx = *_NSUnderlyingErrorKey;
            var_30 = rdx;
            rbx = [[r14 objectForKeyedSubscript:rdx] retain];
            [rbx release];
            [r14 release];
            rdi = @class(NSAlert);
            if (rbx != 0x0) {
                r14 = [rdi new];
                r15 = [[*(r15 + 0x20) lastPathComponent] retain];
                rbx = [[NSString stringWithFormat:@"The document \"%@\" could not be opened.", r15] retain];
                [r14 setMessageText:rbx];
                rdi = rbx;
                [rdi release];
                [r15 release];
                r15 = [[r13 userInfo] retain];
                rax = [r15 objectForKeyedSubscript:var_30];
                r12 = [rax retain];
                rbx = [[r12 localizedDescription] retain];
                [r14 setInformativeText:rbx];
                rdi = rbx;
                [rdi release];
                [r12 release];
                [r15 release];
            }
            else {
                r14 = [[rdi alertWithError:r13] retain];
            }
        }
        else {
            r14 = [NSAlert new];
            r15 = [[*(r15 + 0x20) lastPathComponent] retain];
            rax = [NSString stringWithFormat:@"The document \"%@\" could not be opened.", r15];
            rbx = [rax retain];
            [r14 setMessageText:rbx];
            [rbx release];
            [r15 release];
        }
        [r14 runModal];
        [r14 release];
    }
    rdi = r13;
    [rdi release];
    return;
}
*/
