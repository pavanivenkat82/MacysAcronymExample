//
//  AcronymsTableViewCell.h
//  LookAcronyms
//
//  Created by Pavani Repalle. on 8/22/15.
//  Copyright (c) 2015 Pavani. All rights reserved.
//

#import <UIKit/UIKit.h>
//Custom cell to display Acronym
@interface AcronymsTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *lblAcronym;
@property (weak, nonatomic) IBOutlet UILabel *lblFrequency;
@property (weak, nonatomic) IBOutlet UILabel *lblYear;

@end
