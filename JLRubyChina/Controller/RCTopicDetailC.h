//
//  RCTopicDetailC.h
//  JLRubyChina
//
//  Created by Lee jimney on 12/10/13.
//  Copyright (c) 2013 jimneylee. All rights reserved.
//

#import "JLNimbusTableViewController.h"

// TODO:楼层调转
@interface RCTopicDetailC : JLNimbusTableViewController
- (id)initWithTopicId:(unsigned long)topicId;
- (void)replyTopicWithFloorAtSomeone:(NSString*)floorAtsomeoneString;
@end
