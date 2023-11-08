#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress()
{
    mCap = mSize;
    T *new_mData = new T[mSize];
    for (size_t i = 0; i < mSize; i++)
        new_mData[i] = mData[i];
    delete[] mData;
    mData = new_mData;
}

#endif
