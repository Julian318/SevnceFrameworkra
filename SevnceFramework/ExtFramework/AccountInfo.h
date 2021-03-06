/*
 *  Copyright (c) 2013 The CCP project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a Beijing Speedtong Information Technology Co.,Ltd license
 *  that can be found in the LICENSE file in the root of the web site.
 *
 *                    http://www.yuntongxun.com
 *
 *  An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#import <Foundation/Foundation.h>

@interface AccountInfo : NSObject
@property (nonatomic, retain) NSString *subAccount;
@property (nonatomic, retain) NSString *subToken;
@property (nonatomic, retain) NSString *voipId;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, assign) BOOL     isChecked;
@end
