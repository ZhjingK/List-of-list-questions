����������
class Sort
{
public:
	ð������
	ListNode* sort_bubble(ListNode* head)
	{
		ListNode* tail = NULL;
		int flag = 0;
		if (head == NULL && head->_next == NULL)
		{
			return head;
		}
		while (tail != head->_next)
		{
			ListNode* plist = head;
			ListNode* next = head->_next;
			while (next != tail)
			{
				if (plist->_val > next->_val)
				{
					int ret = plist->_val;
					plist->_val = next->_val;
					next->_val = ret;
					flag = 1;
				}
				plist = plist->_next;
				next = next->_next;
			}
			//���ñ�ǣ�����������û�����ݽ�����ʱ���˵�����������Ѿ��ź���
			if (flag == 0)
			{
				break;
			}
			tail = plist;
		}
		return head;
	}

	��������(ǰ��ָ�뷨)
	void sort_quick(ListNode* &head, ListNode* &end)
	{
		if (head == NULL&&head == end)
		{
			return;
		}

		//���ÿ��Ż�׼ֵ������׼ֵ���е�������
		int key = head->_val;
		ListNode* ret = head->_next;
		head->_next = NULL;

		//��ʶ����������ͷβ��pre��������ʶ��¼�ڵ�
		ListNode* head1 = NULL;
		ListNode* pre1 = NULL;
		ListNode* end1 = NULL;

		ListNode* head2 = NULL;
		ListNode* pre2 = NULL;
		ListNode* end2 = NULL;

		//head1�����Ŵ���key����ֵ
		while (ret != NULL)
		{
			if (ret->_val > key)
			{
				if (head1 == NULL)
				{
					head1 = ret;
					pre1 = ret;
				}
				else
				{
					pre1->_next = ret;
					pre1 = ret;
				}
				ret = ret->_next;
				pre1->_next = NULL;
			}
			//head2���С�ڻ�׼ֵ������
			else
			{
				if (head2 == NULL)
				{
					head2 = ret;
					pre2 = ret;
				}
				else
				{
					pre2->_next = ret;
					pre2 = ret;
				}
				ret = ret->_next;
				pre2->_next = NULL;
			}
		}

		//��¼β�ڵ�
		end1 = pre1;
		end2 = pre2;

		//�Է�������ͬ���Ĳ���
		sort_quick(head1, end1);
		sort_quick(head2, end2);

		//��������������
		if (head1 != NULL&&head2 != NULL)
		{
			end1->_next = head;
			head->_next = head2;
			head = head1;
			end = end2;
		}
		else if (head1 != NULL)
		{
			end1->_next = head;
			end = head;
			head = head1;
		}
		else if (head2 != NULL)
		{
			head->_next = head2;
			end = end2;
		}
	}
};
