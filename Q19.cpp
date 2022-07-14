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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next)
            return head->next;
        ListNode* temp = head;
        int pos = 0;
        while(temp != nullptr){
            pos++;
            temp = temp->next;
        }
        
        temp = head;        
        for(int m = 0; m < pos - n - 1; m++)
            temp = temp->next;
        if(pos == n)
            head = head->next;
        else
            temp->next =(temp->next == nullptr)? nullptr :temp->next->next;

        return head;
    }
};
