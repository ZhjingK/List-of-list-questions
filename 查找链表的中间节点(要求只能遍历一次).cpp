���ҵ�������м�ڵ㣬Ҫ��ֻ�ܱ���һ������
ListNode* FindMid(ListNode* phead)
{
	if (phead == NULL || phead->_next == NULL)
	{
		return phead;
	}

	//����ָ��
	//ע�⣺��ָ���next��next��next��Ҫ��֤����
	ListNode* fast = phead;
	ListNode* slow = phead;

	while (fast && fast->_next && fast->_next->_next)
	{
		fast = fast->_next->_next;
		slow = slow->_next;
	}
	return slow;
}