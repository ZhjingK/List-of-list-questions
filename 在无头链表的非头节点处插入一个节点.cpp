在无头链表的非头节点处插入一个节点
class Insert
{
public:
	void Into(ListNode* head,ListNode* pos,int val)
	{
		assert(pos);
		ListNode* newNode = new ListNode(val);
		if (head == NULL)
		{
			head = newNode;
		}
		else 
		{
			ListNode* cur = head;
			while (cur->_next != pos)
			{
				cur = cur->_next;
			}
			//cur->_next为pos节点
			cur->_next = newNode;
			newNode->_next = pos;
		}
	}
};