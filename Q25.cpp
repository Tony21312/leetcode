class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {\
        if(k == 1)
            return head;
        vector<int>temp;
        for(; head; head = head->next)
            temp.push_back(head->val);
        
        ListNode* ans = new ListNode(temp[k - 1]);
        ListNode* tmp = ans;
        for(int n = k - 1; n < temp.size(); n += k)
            for(int m = n, i = 0; i < k; i++, m--, tmp = tmp->next)
                tmp->next = new ListNode(temp[m]);      
        for(int n = temp.size() - (temp.size() % k); n < temp.size(); n++, tmp = tmp->next)
            tmp->next = new ListNode(temp[n]);  

        return ans->next;
    
    }
};
