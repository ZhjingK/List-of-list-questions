class Reverse
{
public:
	//����ջ���Ƚ���������ʽ�������
	void reverse(ListNode* head)
	{
		stack<ListNode*> s;
		assert(head);
		ListNode* cur = head;
		while (cur)
		{
			s.push(cur);
			cur = cur->_next;
		}
		cur = NULL;
		while (!s.empty())
		{
			cur = s.top();
			cout << cur->_val << " ";
			s.pop();
		}
	}

	//�´���һ��NULL�ڵ㽫�����нڵ�����������
	ListNode* reverse(ListNode* head)
	{
		assert(head);
		ListNode* cur = NULL;
		ListNode* tmp = head;
		while (tmp)
		{
			ListNode* node = tmp;
			tmp = tmp->_next;
			node->_next = cur;
			cur = node;
		}
		return cur;
	}
};