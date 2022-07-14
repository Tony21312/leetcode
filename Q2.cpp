/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int>sum;
        while(l1 && l2)
        {
            sum.push_back(l1->val + l2->val);
                l1 = l1->next;     
                l2 = l2->next;
        }
        while(l1)
        {
            sum.push_back(l1->val);
            l1 = l1->next;
        }
            
        while(l2)
        {
            sum.push_back(l2->val);
            l2 = l2->next;
        }
          
        sum.resize(sum.size() + 1);
        for(int n = 0; n < sum.size(); n++)
            if(sum[n] >= 10)
            {
                sum[n+1] += sum[n] / 10;
                sum[n] %= 10;
            }
        if(sum[sum.size() - 1] == 0)
            sum.resize(sum.size() - 1);
        ListNode* temp = new ListNode(0), *curr = temp;
        for(int n = 0; n < sum.size(); n++,curr = curr->next)
            curr->next = new ListNode(sum[n]);
        
        return temp->next;
    }
};
