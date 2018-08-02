���ҵ���������k���ڵ㣬Ҫ��ֻ�ܱ�������һ��
ListNode* FindK(ListNode* phead,size_t K)
{
	assert(phead);

	ListNode* fast = phead;
	ListNode* slow = phead;
	
	//��ָ�����ߵ���K���ڵ㣬��ָ��Ϳ�ָ��һ����(��ָ�����ָ�����K������һ�������)
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
