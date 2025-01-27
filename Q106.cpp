/*
 * @lc app=leetcode id=106 lang=cpp
 *
 * [106] Construct Binary Tree from Inorder and Postorder Traversal
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int rootIdx = postorder.size() - 1;
        return build(inorder, postorder, rootIdx, 0, postorder.size() - 1);
    }
    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int& rootIdx, int start, int end) {
        if(start > end || rootIdx < 0) return nullptr;
        int rootVal = postorder[rootIdx--];
        TreeNode* root = new TreeNode(rootVal);
        int idx = start;
        while(inorder[idx] != rootVal) idx++;
        root->right = build(inorder, postorder, rootIdx, idx + 1, end);
        root->left = build(inorder, postorder, rootIdx, start, idx - 1);
        
        return root;
    }
};
// @lc code=end

