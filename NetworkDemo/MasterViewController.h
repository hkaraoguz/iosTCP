//
//  MasterViewController.h
//  NetworkDemo
//
//  Created by Hakan Karaoguz on 12/20/12.
//  Copyright (c) 2012 codigo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MasterViewController : UIViewController<NSStreamDelegate>{

    NSInputStream *inputStream;
    NSOutputStream *outputStream;

}
//@property (strong,nonatomic) NSInputStream* inputStream;
- (void)initNetworkCommunication;

@end
