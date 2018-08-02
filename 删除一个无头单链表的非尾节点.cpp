//删除一个无头单链表的非尾节点
struct ListNode
{
	int _val;
	ListNode* _next;

	ListNode(const int x)
		:_val(x)
		, _next(NULL)
	{}
};
class Delete
{
public:
	ListNode* Del(ListNode* head,int val)
	{
		if (head == NULL)
		{
			return NULL;
		}
		ListNode* cur = head;
		ListNode* next = cur->_next;

		while (next->_val!=val)
		{
			cur = cur->_next;
			next = next->_next;
		}
		//这时next是需要删除的节点
		cur->_next = next->_next;
		free (next);
		next = NULL;
	}
};