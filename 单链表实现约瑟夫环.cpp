������ʵ��Լɪ��
Լɪ��;��֪n���ˣ��Ա��1��2��3...n�ֱ��ʾ��Χ����һ��Բ����Χ��
�ӱ��Ϊk���˿�ʼ����������m���Ǹ��˳��У�������һ�����ִ�1��ʼ����������m���Ǹ����ֳ��У�
���˹����ظ���ȥ��ֱ��Բ����Χ����ȫ�����С�
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