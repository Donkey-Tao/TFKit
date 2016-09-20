//
//  UIBarButtonItem+TFExtension.h
//  101-百思不得姐
//
//  Created by 陶飞 on 16/5/29.
//  Copyright © 2016年 taofei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (TFExtension)

+(instancetype)itemWithImage:(NSString *)image highImage:(NSString *)highImage target:(id)target action:(SEL)action;

@end
