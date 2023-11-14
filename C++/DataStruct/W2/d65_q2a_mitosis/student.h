#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    if (mSize + b - a + 1 > mCap)
        expand(mCap * 2);
    for (int i = 0; i < a; i++)
        mData[mSize + b - a - i] = mData[mSize - i - 1];
    for (int i = 0; i < b - a + 1; i++)
    {
        mData[mSize + b - 2 * a - 2 * i] = mData[mSize - 1 - a - i];
        mData[mSize + b - 2 * a - 2 * i - 1] = mData[mSize - 1 - a - i];
    }
    mSize += b - a + 1;
}

#endif
