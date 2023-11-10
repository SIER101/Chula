#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m)
{
    if (m == 0 || a < &mData[0] || a > &mData[mSize - 1] || b < &mData[0] || b > &mData[mSize - 1] || (a + m > b && a <= b) || (b + m > a && b <= a))
        return false;
    T temp;
    while (m--)
    {
        temp = *a;
        *(a++) = *b;
        *(b++) = temp;
    }
    return true;
}

#endif
