class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(!head)
            return head;

        queue<ListNode*>smaller;
        queue<ListNode*>bigger;

        while(head)
        {
            if(head->val >= x)
                bigger.push(head);
            else
                smaller.push(head);
            head = head->next;
        }
        head = nullptr;
        auto temp = head;

        while(!smaller.empty())
            if(!head)
            {
                head = smaller.front();
                smaller.pop();
                temp = head;
            }
            else
            {
                temp->next = smaller.front();
                smaller.pop();
                temp = temp->next;
            }

        while(!bigger.empty())
            if(!head)
            {
                head = bigger.front();
                bigger.pop();
                temp = head;
            }
            else
            {
                temp->next = bigger.front();
                bigger.pop();
                temp = temp->next;
            }        
        if(temp)
            temp->next = nullptr;
        return head;
    }
};
