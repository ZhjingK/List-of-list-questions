查找单链表的中间节点，要求只能遍历一次链表
ListNode* FindMid(ListNode* phead)
{
	if (phead == NULL || phead->_next == NULL)
	{
		return phead;
	}

	//快慢指针
	//注意：快指针的next，next的next都要保证存在
	ListNode* fast = phead;
	ListNode* slow = phead;

	while (fast && fast->_next && fast->_next->_next)
	{
		fast = fast->_next->_next;
		slow = slow->_next;
	}
	return slow;
}