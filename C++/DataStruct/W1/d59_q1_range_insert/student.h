#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::insert(iterator position, iterator first, iterator last)
{
  mSize += last - first;
  mCap = mSize;
  T *new_mData = new T[mSize];
  int pos = position - begin(), end = pos + last - first;
  for (int i = 0, j = 0; i < mSize; i++)
  {
    if (i >= pos && i < end)
      new_mData[i] = *(first++);
    else
      new_mData[i] = mData[j++];
  }
  delete[] mData;
  mData = new_mData;
}

#endif