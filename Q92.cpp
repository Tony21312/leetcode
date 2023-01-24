class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head)
            return head;
        vector<int>temp;
        while(head)
        {
            temp.push_back(head->val);
            head = head->next;
        }
        reverse(temp.begin() + left - 1, temp.begin() + right);
        head = new ListNode(temp[0]);
        ListNode* it = head;
        for(int n = 1; n < temp.size(); n++, it = it ->next)
            it->next = new ListNode(temp[n]);
        return head;
    }
};
