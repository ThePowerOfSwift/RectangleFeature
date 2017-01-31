//
//  UIImage+fixOrientation.h
//  Pods
//
//  Created by Developer on 1/31/17.
//
//

#import <UIKit/UIKit.h>

@interface UIImage (fixOrientation)

-(UIImage *)fixOrientation;
+(UIImage*)renderImage:(NSString *)imagName;
+(UIImage *) scaleAndRotateImage:(UIImage *)image;

@end
