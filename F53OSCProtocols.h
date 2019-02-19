//
//  F53OSCProtocols.h
//
//  Created by Christopher Ashworth on 1/30/13.
//
//  Copyright (c) 2013-2019 Figure 53 LLC, http://figure53.com
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

@protocol F53OSCPacketDestination;
@class F53OSCMessage;


NS_ASSUME_NONNULL_BEGIN

@protocol F53OSCServer <NSObject>

@property (nonatomic, weak, nullable)   id <F53OSCPacketDestination> delegate;

- (BOOL) startListening;
- (void) stopListening;

@end


@protocol F53OSCPacketDestination

- (void) takeMessage:(nullable F53OSCMessage *)message;

@end

NS_ASSUME_NONNULL_END
