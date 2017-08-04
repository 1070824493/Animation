//
//  AnimationControl.h
//  一个实用的动画
//
//  Created by loyo_tangyi on 2017/8/4.
//  Copyright © 2017年 tangyi. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AnimationControlDelegate <NSObject>

- (void)didTurnedToSecondPage;

- (void)didTurnedToFirstPage;

@end

@interface AnimationControl : UIView

@property (nonatomic, assign) BOOL origin;          //是否在初始状态，即在第一个方块
@property (nonatomic, weak) id <AnimationControlDelegate> delegate;

- (void)turnToSecondePage;

- (void)turnToFirstPage;


@end



@interface TestView : UIView

@property (nonatomic, assign) double r1;
@property (nonatomic, assign) double r2;

@end
