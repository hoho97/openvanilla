//
// OVTableBasedModulePreferencesViewController.h
//
// Copyright (c) 2004-2012 Lukhnos Liu (lukhnos at openvanilla dot org)
//
// Permission is hereby granted, free of charge, to any person
// obtaining a copy of this software and associated documentation
// files (the "Software"), to deal in the Software without
// restriction, including without limitation the rights to use,
// copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following
// conditions:
//
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
// OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
// HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
// WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.
//

#import <Cocoa/Cocoa.h>
#import "OVBaseModulePreferencesViewController.h"

@interface OVTableBasedModulePreferencesViewController : OVBaseModulePreferencesViewController

- (IBAction)updateField:(id)sender;
- (IBAction)removeInputMethodAction:(id)sender;

@property (weak, nonatomic) IBOutlet NSPopUpButton *fieldAlphaNumericKeyboardLayout;
@property (weak, nonatomic) IBOutlet NSPopUpButton *fieldMaximumRadicalLength;
@property (weak, nonatomic) IBOutlet NSButton *fieldClearReadingBufferAtCompositionError;
@property (weak, nonatomic) IBOutlet NSButton *fieldComposeWhileTyping;
@property (weak, nonatomic) IBOutlet NSButton *fieldSendFirstCandidateWithSpaceWithOnePageList;
@property (weak, nonatomic) IBOutlet NSButton *fieldShouldComposeAtMaximumRadicalLength;
@property (weak, nonatomic) IBOutlet NSButton *fieldUseSpaceAsFirstCandidateSelectionKey;
@property (weak, nonatomic) IBOutlet NSTextField *cusmtomTableBasedInputMethodInfo;
@property (weak, nonatomic) IBOutlet NSButton *removeInputMethodButton;
@end
