// Copyright 2018 LinkedIn Corp.
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License.
// You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.

#import "LOKBaseLayoutBuilder.h"

@interface LOKSizeLayoutBuilder : LOKBaseLayoutBuilder

+ (nonnull instancetype)withSublayout:(nullable id<LOKLayout>)sublayout;

@property (nonatomic, nullable) id<LOKLayout> sublayout;
@property (nonatomic) CGFloat minWidth;
@property (nonatomic) CGFloat maxWidth;
@property (nonatomic) CGFloat minHeight;
@property (nonatomic) CGFloat maxHeight;
@property (nonatomic) CGFloat width;
@property (nonatomic) CGFloat height;

- (nonnull LOKSizeLayout *)build;

@end
