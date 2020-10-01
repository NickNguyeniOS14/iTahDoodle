//
//  AppDelegate.h
//  iTahDoodle
//
//  Created by Nick Nguyen on 10/1/20.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (nonatomic) UITableView *taskTable;
@property (nonatomic) UITextField *taskField;
@property (nonatomic) UIButton *insertButton;

@property (nonatomic) NSMutableArray *tasks;

- (void)addTasks:(id)sender;

@end

