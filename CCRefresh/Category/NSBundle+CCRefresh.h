//
//  NSBundle+CCRefresh.h
//  CCRefresh
//
//  Created by deng you hua on 4/17/17.
//  Copyright © 2017 CC | ccworld1000@gmail.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSBundle (CCRefresh)

+ (instancetype)CCRefreshBundle;
+ (UIImage *)CCArrowImage;
+ (NSString *)CCLocalizedStringForKey:(NSString *)key value:(NSString *)value;
+ (NSString *)CCLocalizedStringForKey:(NSString *)key;

@end
