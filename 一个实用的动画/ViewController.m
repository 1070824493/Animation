//
//  ViewController.m
//  一个实用的动画
//
//  Created by loyo_tangyi on 2017/8/4.
//  Copyright © 2017年 tangyi. All rights reserved.
//

#import "ViewController.h"
#import "AnimationControl.h"
@interface ViewController ()

@property (nonatomic, strong) AnimationControl *animationControl;
@property (weak, nonatomic) IBOutlet UIButton *leftButton;
@property (weak, nonatomic) IBOutlet UIButton *rightButton;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self.view addSubview:self.animationControl];
    
    // Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)leftAction:(id)sender {
    [self.animationControl turnToFirstPage];
}
- (IBAction)rightAction:(id)sender {
    [self.animationControl turnToSecondePage];
}

- (AnimationControl *)animationControl
{
    if (!_animationControl) {
        _animationControl = [[AnimationControl alloc]initWithFrame:CGRectMake(0, 0, 270, 30)];
        _animationControl.center = self.view.center;
    }
    return _animationControl;
}
@end
