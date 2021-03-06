//
// Copyright (c) 2016 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// IntermNodePatternMatcher is a helper class for matching node trees to given patterns.
// It can be used whenever the same checks for certain node structures are common to multiple AST
// traversers.
//

#ifndef COMPILER_TRANSLATOR_INTERMNODEPATTERNMATCHER_H_
#define COMPILER_TRANSLATOR_INTERMNODEPATTERNMATCHER_H_

class TIntermAggregate;
class TIntermBinary;
class TIntermNode;
class TIntermSelection;

class IntermNodePatternMatcher
{
  public:
    enum PatternType
    {
        kUnfoldedShortCircuitExpression = 0x0001,

        // Matches expressions that return arrays with the exception of simple statements where a
        // constructor or function call result is assigned.
        kExpressionReturningArray = 0x0002
    };
    IntermNodePatternMatcher(const unsigned int mask);

    bool match(TIntermBinary *node, TIntermNode *parentNode);
    bool match(TIntermAggregate *node, TIntermNode *parentNode);
    bool match(TIntermSelection *node);

  private:
    const unsigned int mMask;
};

#endif
