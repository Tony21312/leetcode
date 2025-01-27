/*
 * @lc app=leetcode id=107 lang=cpp
 *
 * [107] Binary Tree Level Order Traversal II
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans = vector<vector<int>>();
        solve(root, ans, 0);
        reverse(begin(ans), end(ans));
        return ans;
    }
    void solve(TreeNode* root, vector<vector<int>>& ans, int level) {
        if(!root) return;
        if(ans.size() == level) ans.push_back(vector<int>());
        
        solve(root->left, ans, level + 1);
        solve(root->right, ans, level + 1);
        ans[level].push_back(root->val);
    }
};
// @lc code=end

