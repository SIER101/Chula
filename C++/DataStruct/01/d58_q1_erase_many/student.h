#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos)
{
  int posSize = pos.size();
  mSize -= posSize;
  mCap = mSize;
  for (int i = pos[0], j = 0; i < mSize; i++)
  {
    while (j < posSize && i + j == pos[j])
      j++;
    mData[i] = mData[i + j];
  }
}

#endif
