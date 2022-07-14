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
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            if(!list1)
                return list2;
            else if(!list2)
                return list1;
            vector<int> temp;
            while(list1){
                temp.push_back(list1->val);
                list1 = list1->next;
            }
            while(list2){
                temp.push_back(list2->val);
                list2 = list2->next;
            }
            sort(temp.begin(), temp.end());
            list1 = new ListNode(temp[0]);
            list2 = list1;
            for(int n = 1; n < temp.size(); n++, list2 = list2->next){
                list2->next = new ListNode(temp[n]);
            }
        return list1;
    }
};
