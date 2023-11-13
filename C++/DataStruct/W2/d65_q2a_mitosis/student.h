#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    if (mSize + b - a + 1 > mCap)
        mCap *= 2;
    T *new_mData = new T[mCap];
    int i = 0, j = mSize - 1 - b;
    for (; i < j; i++)
        new_mData[i] = mData[i];
    for (; i <= mSize - 1 - a; i++, j++)
    {
        new_mData[j++] = mData[i];
        new_mData[j] = mData[i];
    }
    for (; i < mSize; i++, j++)
        new_mData[j] = mData[i];
    delete[] mData;
    mSize += b - a + 1;
    mData = new_mData;
}

#endif
