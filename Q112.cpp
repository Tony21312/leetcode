/*
 * @lc app=leetcode id=112 lang=cpp
 *
 * [112] Path Sum
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        if(!(root->left || root->right) && root->val == targetSum) return true;

        queue<pair<TreeNode*, int>>q;
        q.push({root, root->val});
        while(!q.empty()){
            auto front = q.front();
            q.pop();
            if(!(front.first->left || front.first->right) && front.second == targetSum) return true;
            if(front.first->left)q.push({front.first->left, front.second + front.first->left->val});
            if(front.first->right)q.push({front.first->right, front.second + front.first->right->val});
        }
        return false;
    }
};
// @lc code=end

