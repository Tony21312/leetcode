class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr)
            return head;
        ListNode* it1 = head;
        ListNode* it2 = head->next;
        while(it2)
            if(it1->val == it2->val)
            { 
                it1->next = it2->next;
                it2 = it2->next;
            }
            else
            {
                it1 = it1->next;
                it2 = it2->next;
            }
        return head;
    }
};
