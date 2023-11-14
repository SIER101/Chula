#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T, typename Comp>
T CP::priority_queue<T, Comp>::get_kth(size_t k) const
{
    if (k == 1)
        return mData[0];
    else if (k == 2)
    {
        return mLess(mData[1], mData[2]) ? mData[2] : mData[1];
    }
    else if (k == 3)
    {
        T temp;
        if (mLess(mData[1], mData[2]))
        {
            temp = mData[1];
            if (mLess(temp, mData[5]))
                temp = mData[5];
            if (mLess(temp, mData[6]))
                temp = mData[6];
        }
        else
        {
            temp = mData[2];
            if (mLess(temp, mData[3]))
                temp = mData[3];
            if (mLess(temp, mData[4]))
                temp = mData[4];
        }

        return temp;
    }
}

#endif
