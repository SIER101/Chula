#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int, T>> data)
{
  T *new_mData = new T[mSize * 2]();
  T *temp_mData = new T[mSize + data.size()];
  for (int i = 0; i < mSize; i++)
    new_mData[2 * i + 1] = mData[i];
  for (int i = 0; i < data.size(); i++)
    new_mData[2 * data[i].first] = data[i].second;
  for (int i = 0, j = 0; i < mSize *2; i++)
  {
    temp_mData[j++] = new_mData[i];
  }
  mSize += data.size();
  mCap = mSize;
  delete[] new_mData;
}

#endif
