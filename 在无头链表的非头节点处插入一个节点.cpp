����ͷ����ķ�ͷ�ڵ㴦����һ���ڵ�
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
			//cur->_nextΪpos�ڵ�
			cur->_next = newNode;
			newNode->_next = pos;
		}
	}
};