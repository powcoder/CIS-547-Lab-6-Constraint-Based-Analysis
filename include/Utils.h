https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef UTILS_H
#define UTILS_H

#include "llvm/IR/Instructions.h"

using namespace llvm;

std::string toString(Value *I);

std::vector<Instruction *> getPredecessors(Instruction *I);

bool isTaintedInput(CallInst *CI);

bool isSanitizer(CallInst *CI);

#endif // UTILS_H