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
    ListNode* swapPairs(ListNode* head) {
        if(!head)
            return head;
        ListNode* temp1 = head;
        ListNode* temp2 = head->next;
        int temp = 0;
        while(temp2 && temp1){
            temp = temp2->val;
            temp2->val = temp1->val;
            temp1->val = temp;
            
            temp1 = (temp2->next == nullptr)? nullptr : temp2->next;
            temp2 = (temp1 == nullptr)? nullptr : temp1->next;
        }
        return head;
    }
};
