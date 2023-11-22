#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT, typename MappedT, typename CompareT>
size_t CP::map_bst<KeyT, MappedT, CompareT>::process(node *n)
{
  if (n == NULL)
    return 0;
  return process(n->left) + process(n->right) + 1;
}

template <typename KeyT, typename MappedT, typename CompareT>
std::pair<KeyT, MappedT> CP::map_bst<KeyT, MappedT, CompareT>::subtree(map_bst<KeyT, MappedT, CompareT> &left, map_bst<KeyT, MappedT, CompareT> &right)
{
  left.mRoot = mRoot->left;
  left.mSize = process(left.mRoot);
  right.mRoot = mRoot->right;
  right.mSize = mSize - left.mSize - 1;
  mRoot->left = NULL;
  mRoot->right = NULL;
  mSize = 1;
  return mRoot->data;
}

#endif