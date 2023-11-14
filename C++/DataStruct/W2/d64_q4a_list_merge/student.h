#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls)
{
  for (auto &it : ls)
  {
    mHeader->prev->next = it.mHeader->next;
    it.mHeader->next->prev = mHeader->prev;
    mHeader->prev = it.mHeader->prev;
    it.mHeader->prev->next = mHeader;
    it.mHeader->next = it.mHeader;
    it.mHeader->prev = it.mHeader;
    mSize += it.mSize;
    it.mSize = 0;
  }
}

#endif