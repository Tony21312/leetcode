class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        inorder(root, ans);
        return ans;
    }
    void inorder(TreeNode* it, vector<int>&ans){
        if(!it)
            return;
        inorder(it->left, ans);
        ans.push_back(it->val);
        inorder(it->right, ans);
    }
};
