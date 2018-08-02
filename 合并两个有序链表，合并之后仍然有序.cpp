合并两个有序链表，合并后仍然有序
ListNode* Combine(ListNode* phead, ListNode* plist)
{
	if (phead == NULL)
	{
		return plist;
	}
	if (plist == NULL)
	{
		return phead;
	}

	ListNode* list = NULL;
	ListNode* tail = NULL;

	if (phead->_val > plist->_val)
	{
		list = plist;
		plist = plist->_next;
	}
	else
	{
		list = phead;
		phead = phead->_next;
	}
	tail = list;

	while (plist != NULL&&phead != NULL)
	{
		if (plist->_val > phead->_val)
		{
			tail->_next = phead;
			phead = phead->_next;
		}
		else
		{
			tail->_next = plist;
			plist = plist->_next;
		}
		tail = tail->_next;

		if (plist == NULL)
		{
			tail->_next = phead;
		}
		if (phead == NULL)
		{
			tail->_next = plist;
		}
	}
	return list;
}
