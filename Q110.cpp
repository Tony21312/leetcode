/*
 * @lc app=leetcode id=110 lang=cpp
 *
 * [110] Balanced Binary Tree
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
    bool isBalanced(TreeNode* root) {
        return height(root, 0);
    }
    int height(TreeNode* root, int temp_height) {
        if(!root) return temp_height + 1;
        int left = height(root->left, temp_height + 1), right = height(root->right, temp_height + 1);
        if(abs(left - right) > 1) return 0;
        return max(left, right);
    }
};
// @lc code=end

