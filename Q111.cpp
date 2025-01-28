/*
 * @lc app=leetcode id=111 lang=cpp
 *
 * [111] Minimum Depth of Binary Tree
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
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode*, int>>q;
        q.push({root, 1});
        while(!q.empty()){
            auto front = q.front();
            q.pop();

            if(front.first->left) q.push({front.first->left, front.second + 1});
            if(front.first->right) q.push({front.first->right, front.second + 1});
            if(!front.first->left && !front.first->right) return front.second;
        }
        return 0;
    }
};
// @lc code=end

