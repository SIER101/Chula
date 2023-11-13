#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_back(size_t pos)
{
  for (; pos != mSize - 1; pos++)
    std::swap(mData[(mFront + pos) % mCap], mData[(mFront + pos + 1) % mCap]);
}

#endif
