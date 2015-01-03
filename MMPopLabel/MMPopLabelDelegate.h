//
//  MMPopLabelDelegate.h
//  MMPopLabelDemo
//
//  Created by Milton Moura on 27/05/14.
//  Following code included in/by 2014 Milton Moura.
//

#import <Foundation/Foundation.h>

@class MMPopLabel;

@protocol MMPopLabelDelegate <NSObject>

@optional
- (void)dismissedPopLabel:(MMPopLabel *)popLabel;
//- (void)didPressDismissForPopLabel:(MMPopLabel *)popLabel;
//- (void)didPressSkipForPopLabel:(MMPopLabel *)popLabel;
- (void)didPressButtonForPopLabel:(MMPopLabel *)popLabel atIndex:(NSInteger)index;

@end
