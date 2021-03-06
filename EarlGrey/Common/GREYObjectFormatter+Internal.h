//
// Copyright 2016 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

/**
 *  @file GREYObjectFormatter+Internal.h
 *  @brief Exposes GREYObjectFormatter's interfaces and methods that are otherwise private for
 *  testing purposes.
 */

@interface GREYObjectFormatter (Internal)

/**
 *  Serializes an array of objects into JSON string.
 *  The supported objects are: NSString, NSNumber, NSArray, NSDictionary.
 *
 *  @param array    The array to serialize.
 *  @param prefix   A string that will be applied to each newline of the serialized array.
 *  @param indent   The spaces that will be applied to each element of the serialized array.
 *  @param keyOrder Output the key-value pair in the order of the keys specified
 *                  in the keyOrder array.
 *
 *  @return JSON-ified string of the provided @c array.
 */
+ (NSString *)formatArray:(NSArray *)array
                   prefix:(NSString *)prefix
                   indent:(NSInteger)indent
                 keyOrder:(NSArray *)keyOrder;

/**
 *  Serializes a dictionary of objects into JSON string.
 *  The supported objects are: NSString, NSNumber, NSArray, NSDictionary.
 *
 *  @param dictionary The dictionary to serialize.
 *  @param prefix     A string that will be applied to each newline
 *                    of the serialized dictionary.
 *  @param indent     Number of spaces that will be applied to each element
 *                    of the serialized dictionary.
 *  @param hideEmpty  Hide the key-value pair if the value in the dictionary
 *                    when the key is empty.
 *  @param keyOrder   Output the key-value pair in the order of the keys specified
 *                    in the keyOrder array.
 *
 *  @return JSON-ified string of the provided @c dictionary.
 */
+ (NSString *)formatDictionary:(NSDictionary *)dictionary
                        prefix:(NSString *)prefix
                        indent:(NSInteger)indent
                     hideEmpty:(BOOL)hideEmpty
                      keyOrder:(NSArray *)keyOrder;

@end
