//ɾ��һ����ͷ������ķ�β�ڵ�
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
		//��ʱnext����Ҫɾ���Ľڵ�
		cur->_next = next->_next;
		free (next);
		next = NULL;
	}
};