单链表排序
class Sort
{
public:
	冒泡排序
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
			//设置标记，当单次排序没有数据交换的时候就说明本组数据已经排好序
			if (flag == 0)
			{
				break;
			}
			tail = plist;
		}
		return head;
	}

	快速排序(前后指针法)
	void sort_quick(ListNode* &head, ListNode* &end)
	{
		if (head == NULL&&head == end)
		{
			return;
		}

		//设置快排基准值，将基准值进行单独保存
		int key = head->_val;
		ListNode* ret = head->_next;
		head->_next = NULL;

		//标识两个分区的头尾，pre用来向后标识记录节点
		ListNode* head1 = NULL;
		ListNode* pre1 = NULL;
		ListNode* end1 = NULL;

		ListNode* head2 = NULL;
		ListNode* pre2 = NULL;
		ListNode* end2 = NULL;

		//head1链表存放大于key的数值
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
			//head2存放小于基准值的数据
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

		//记录尾节点
		end1 = pre1;
		end2 = pre2;

		//对分区进行同样的操作
		sort_quick(head1, end1);
		sort_quick(head2, end2);

		//将分区进行连接
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
