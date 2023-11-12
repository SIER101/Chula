#ifndef _STUDENT_H_INCLUDED
#define _STUDENT_H_INCLUDED
#include "queue.h"

template <typename T>
void CP::queue<T>::reverse()
{
  aux = 1 - aux;
}

template <typename T>
const T &CP::queue<T>::front() const
{
  if (aux)
    return mData[(mFront + mSize - 1) % mCap];
  return mData[mFront];
}

template <typename T>
const T &CP::queue<T>::back() const
{
  if (aux)
    return mData[mFront];
  return mData[(mFront + mSize - 1) % mCap];
}

template <typename T>
void CP::queue<T>::push(const T &element)
{
  ensureCapacity(mSize + 1);
  if (aux)
  {
    mFront = (mFront + mCap - 1) % mCap;
    mData[mFront] = element;
  }
  else
    mData[(mFront + mSize) % mCap] = element;
  mSize++;
}

template <typename T>
void CP::queue<T>::pop()
{
  if (!aux)
    mFront = (mFront + 1) % mCap;
  mSize--;
}

#endif