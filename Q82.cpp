class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr)
            return head;
        map<int, int>num;
        for(auto it = head; it; it = it->next)
            num[it->val]++;
        head = nullptr;
        auto it = num.begin();
        for(; it != num.end(); it++)
            if(it->second == 1)
            {
                head = new ListNode(it->first);
                it++;
                break;
            }
        for(auto it1 = head; it != num.end(); it++)
            if(it->second == 1)
            {
                it1->next = new ListNode(it->first);
                it1 = it1->next;
            }       

        return head;
    }
};
