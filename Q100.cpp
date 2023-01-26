class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return same(p, q);
    }
    bool same(TreeNode*it1, TreeNode* it2){
        if(!it1 && !it2)
            return true;
        else if(it1 && !it2)
            return false;
        else if(!it1 && it2)
            return false;
        else
            if(same(it1->left, it2->left) && same(it1->right, it2->right))
                return it1->val == it2->val;
        return false;
    }
};
