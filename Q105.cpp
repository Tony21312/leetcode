/*
 * @lc app=leetcode id=105 lang=cpp
 *
 * [105] Construct Binary Tree from Preorder and Inorder Traversal
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int rootIdx = 0;
        return build(preorder, inorder, rootIdx, 0, inorder.size() - 1);
    }
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int& rootIdx, int start, int end) {
        if(start > end) return nullptr;
        int rootVal = preorder[rootIdx++];
        TreeNode* root = new TreeNode(rootVal);
        int idx = start;
        while(inorder[idx] != rootVal) idx++;
        root->left = build(preorder, inorder, rootIdx, start, idx - 1);
        root->right = build(preorder, inorder, rootIdx, idx + 1, end);
        return root;
    }
};
// @lc code=end

