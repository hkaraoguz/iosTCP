//
//  DetailViewController.h
//  NetworkDemo
//
//  Created by Hakan Karaoguz on 12/20/12.
//  Copyright (c) 2012 codigo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
