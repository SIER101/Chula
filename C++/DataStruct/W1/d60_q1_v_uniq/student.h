#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <unordered_set>

// you can include any other file here
// you are allow to use any data structure

template <typename T>
void CP::vector<T>::uniq()
{
  std::unordered_set<T> s;
  int i = 0;
  for (int j = 0; j < mSize; j++)
  {
    if (s.find(mData[j]) == s.end())
    {
      s.insert(mData[j]);
      mData[i++] = mData[j];
    }
  }
  mSize = i;
  mCap = mSize;
}

#endif
