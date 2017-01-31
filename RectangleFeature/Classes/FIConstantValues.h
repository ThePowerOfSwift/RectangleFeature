//
//  FIConstantValues.h
//  Pods
//
//  Created by Developer on 1/30/17.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum {
    ImageFilterTypeColorful,
    ImageFilterTypeGrayScale,
    ImageFilterTypeBlackAndWhite
    
} ImageFilterType;

@interface FIConstantValues : NSObject

+(UIColor *)themeColor;
+(UIColor *)standartBackgroundColor;
+(UIColor *)doneButtonColor;

+(CGFloat)pictureSelectorHeaderViewHeight;
+(CGFloat)pictureSelectorFooterViewHeight;
+(CGFloat)processFooterViewHeight;

@end
