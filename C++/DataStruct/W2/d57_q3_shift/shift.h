void shift(int k)
{
	while (k < 0)
		k += mSize;
	if (k >= mSize)
		k = k % mSize;
	node *it = mHeader->next;
	while (k--)
		it = it->next;
	mHeader->next->prev = mHeader->prev;
	mHeader->prev->next = mHeader->next;
	it->prev->next = mHeader;
	mHeader->prev = it->prev;
	it->prev = mHeader;
	mHeader->next = it;
}