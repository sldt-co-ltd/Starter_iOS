//
//  JGProgressHUDIndeterminateIndicatorView.h
//  JGProgressHUD
//
//  Created by Jonas Gessner on 19.07.14.
//  Copyright (c) 2014 Jonas Gessner. All rights reserved.
//

#import "_ChannelIO_JGProgressHUD-Defines.h"
#import "_ChannelIO_JGProgressHUDIndicatorView.h"

/**
 An indeterminate progress indicator showing a @c UIActivityIndicatorView.
 */
@interface _ChannelIO_JGProgressHUDIndeterminateIndicatorView : _ChannelIO_JGProgressHUDIndicatorView

/**
 Initializes the indicator view and sets the correct color to match the HUD style.
 */
- (instancetype __nonnull)initWithHUDStyle:(_ChannelIO_JGProgressHUDStyle)style __attribute((deprecated(("This initializer is no longer needed. Use the init initializer method."))));

/**
 Set the color of the activity indicator view.
 @param color The color to apply to the activity indicator view.
 */
- (void)setColor:(UIColor *__nonnull)color;

@end
