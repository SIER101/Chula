void splitList(list<T> &list1, list<T> &list2)
{
    int left = (mSize + 1) / 2, right = mSize - left;
    if (left > 0)
    {
        node *it = mHeader->next;
        for (int i = 0; i < left; i++)
            it = it->next;
        mHeader->next->prev = list1.mHeader->prev;
        it->prev->next = list1.mHeader;
        list1.mHeader->prev->next = mHeader->next;
        list1.mHeader->prev = it->prev;
        list1.mSize += left;
        if (right > 0)
        {
            mHeader->prev->next = list2.mHeader;
            it->prev = list2.mHeader->prev;
            list2.mHeader->prev->next = it;
            list2.mHeader->prev = mHeader->prev;
            list2.mSize += right;
        }
    }
    mSize = 0;
    mHeader->next = mHeader;
}