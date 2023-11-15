void replace(const T &x, list<T> &y)
{
  for (auto it = begin(); it != end(); it++)
  {
    if (*it != x)
      continue;
    for (auto z : y)
      insert(it, z);
    erase(it);
  }
}