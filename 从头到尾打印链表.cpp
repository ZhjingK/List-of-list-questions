//从头到尾打印链表

 struct ListNode {
      int val;
        struct ListNode *next;
        ListNode(int x) :
              val(x), next(NULL) {
        }
 };

class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head) {
		vector<int> v;
		stack<ListNode*> s;
		if (head == NULL)
		{
			return v;
		}
		ListNode* cur = head;
		while (cur)
		{
			s.push(cur);
			cur = cur->next;
		}
		while (!s.empty())
		{
			ListNode* tmp = s.top();
			v.push_back(tmp->val);
			s.pop();
			tmp = tmp->next;
		}
		return v;
	}
};
}