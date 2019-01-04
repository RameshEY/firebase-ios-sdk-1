/*
 * Copyright 2018 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

#import "GDLLogStorage.h"
#import "GDLLogStorage_Private.h"

NS_ASSUME_NONNULL_BEGIN

/** Testing-only methods for GDLLogStorage. */
@interface GDLLogStorage (Testing)

/** Resets the properties of the singleon, but does not reallocate a new singleton. This also
 * doesn't remove stored files from disk.
 */
- (void)reset;

@end

NS_ASSUME_NONNULL_END