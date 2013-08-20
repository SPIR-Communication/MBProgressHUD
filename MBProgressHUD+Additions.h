//
//  MBProgressHUD+Additions.h
//
//  Created by SPIR on 20/08/13.
//  Copyright (c) 2013 SPIR All rights reserved.
//

#import "MBProgressHUD.h"

@interface MBProgressHUD (Additions)

+ (MBProgressHUD *)toastMessage:(NSString *)_message withView:(UIView *)_view andDuration:(NSTimeInterval)_delay;
+ (void)toastMessage:(NSString *)_message andDuration:(NSTimeInterval)_delay;

+ (void)toastMessage:(NSString *)_message andDuration:(NSTimeInterval)_delay completionBlock:(MBProgressHUDCompletionBlock)completion;


@end
