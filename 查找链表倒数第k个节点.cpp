查找单链表倒数第k个节点，要求只能遍历链表一次
ListNode* FindK(ListNode* phead,size_t K)
{
	assert(phead);

	ListNode* fast = phead;
	ListNode* slow = phead;
	
	//快指针先走到第K个节点，慢指针和快指针一起走(快指针和慢指针相差K步，再一起向后走)
	while (--K)
	{
		if (fast == NULL)
		{
			return NULL;
		}
		else
		{
			fast = fast->_next;
		}
	}

	while (fast->_next != NULL)
	{
		fast = fast->_next;
		slow = slow->_next;
	}
	return slow;
}
