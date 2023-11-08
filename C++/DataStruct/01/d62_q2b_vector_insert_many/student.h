#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int, T>> data)
{
  mSize += data.size();
  mCap = mSize;
  T *new_mData = new T[mSize];
  for(int i=0;i<data.size();i++)
  {
    mData[data[i].first] = data[i].second;
  }
  delete[] mData;
  mData = new_mData;
}

#endif
