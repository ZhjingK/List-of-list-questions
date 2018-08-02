class Reverse
{
public:
	//借助栈的先进后出的性质进行排序
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

	//新创建一个NULL节点将链表中节点往后面连接
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