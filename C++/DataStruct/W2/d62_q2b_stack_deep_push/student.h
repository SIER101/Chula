#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::stack<T>::deep_push(size_t pos, const T &value)
{
  mSize++;
  if (mSize > mCap)
    expand(mCap * 2);
  pos = mSize - 1 - pos;
  for (int i = mSize - 1; i > pos; i--)
    mData[i] = mData[i - 1];
  mData[pos] = value;
}

#endif
