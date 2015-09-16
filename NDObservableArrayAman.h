// NDObservableArrayAman.m
// Copyright (c) 2011–2015 Apache
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//  NDObservableArray.m
//  CPT Analytics
//
//  Created by A S Maan on 4/1/15.
//
//

#pragma mark Class Interface

@interface NDObservableArrayAman : NSObject<
NSFastEnumeration,
NSCoding>
{
}


#pragma mark - Properties

@property (nonatomic, strong) NSMutableArray *objects;


#pragma mark - Constructors

- (id)init;
- (id)initWithCapacity: (NSUInteger)numItems;
- (id)initWithArray: (NSArray *)array;


#pragma mark - Array KVO Methods

- (NSUInteger)countOfObjects;
- (id)objectInObjectsAtIndex: (NSUInteger)index;
- (NSArray *)objectsAtIndexes: (NSIndexSet *)indexes;

- (void)insertObject: (id)object
    inObjectsAtIndex: (NSUInteger)index;
- (void)insertObjects: (NSArray *)objectsArray
            atIndexes: (NSIndexSet *)indexes;

- (void)removeObjectFromObjectsAtIndex: (NSUInteger)index;
- (void)removeObjectsAtIndexes: (NSIndexSet *)indexes;

- (void)replaceObjectAtIndex: (NSUInteger)index
                  withObject: (id)anObject;


#pragma mark - Set KVO Methods

- (NSEnumerator *)enumeratorOfObjects;

- (void)addObject: (id)object;

- (void)removeObject: (id)object;


@end // @interface LBObservableArray
