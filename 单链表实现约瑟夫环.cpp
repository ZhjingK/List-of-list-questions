单链表实现约瑟夫环
约瑟夫环;已知n个人（以编号1，2，3...n分别表示）围坐在一张圆桌周围。
从编号为k的人开始报数，数到m的那个人出列；他的下一个人又从1开始报数，数到m的那个人又出列；
依此规律重复下去，直到圆桌周围的人全部出列。
class Joseph
{
public:
	ListNode* joseph(ListNode* head, size_t k)
	{
		if (head == NULL)
		{
			return NULL;
		}
		while (head->_next == head)
		{
			while (--k)
			{
				head = head->_next;
			}
			ListNode* next = head->_next;
			head->_val = next->_val;
			head->_next = next->_next;
			free(next);
		}
		return head;
	}
};