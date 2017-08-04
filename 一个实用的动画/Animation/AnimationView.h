//
//  AnimationView.h
//  一个实用的动画
//
//  Created by loyo_tangyi on 2017/8/4.
//  Copyright © 2017年 tangyi. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, TowardsType) {
    TowardRight,
    TowardLeft,
};


@protocol AnimationViewDelegate <NSObject>

- (void)didTurnedToRight;

- (void)didTurnedToLeft;

@end

@interface AnimationView : UIView

@property (nonatomic, assign) double r1;
@property (nonatomic, assign) double r2;
@property (nonatomic, assign) double d;                             /// 平移距离，输入值
@property (nonatomic, assign) double chosen_d;

@property (nonatomic, assign) TowardsType towardsType;

@property (nonatomic, weak) id<AnimationViewDelegate> delegate;

@end

@interface NYShapeLayer :CAShapeLayer

- (instancetype)initWithFrame:(CGRect)frame Color:(UIColor *)color;

- (instancetype)initWithFrame:(CGRect)frame Color:(UIColor *)color Path:(UIBezierPath *)path;

@end

