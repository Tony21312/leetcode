class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return symmetric(root, root);
    }
    bool symmetric(TreeNode*it1, TreeNode*it2){
        if(!it1 && !it2) return true;
        else if(!it1 && it2) return false;
        else if(it1 && !it2) return false;
        else
            if(symmetric(it1->left, it2->right) && symmetric(it1->right, it2->left))
                return it1->val == it2->val;
        return false;
    }
};
