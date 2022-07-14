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
      ListNode* mergeKLists(vector<ListNode*>& lists) {
          ListNode* ans;
          vector<int> temp;
          for(int n = 0; n < lists.size(); n++){
              while(lists[n]){
                  temp.push_back(lists[n]->val);
                  lists[n] = lists[n]->next;
              }
          }
          if(temp.empty())
              return ans;

          sort(temp.begin(), temp.end());
          ans = new ListNode(temp[0]);
          ListNode* tmp = ans;
          for(int n = 1; n < temp.size(); n++, tmp = tmp->next){
              tmp->next = new ListNode(temp[n]);
          }
        return ans;
    }
};
