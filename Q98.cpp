class Solution {
public:
    bool isValidBST(TreeNode* root) {
        vector<int>temp;
        binary(root, temp);
        for(int n = 0; n < temp.size() - 1; n++)
            if(temp[n] >= temp[n + 1])
                return false;
        return true;
    }
    void binary(TreeNode* it, vector<int>&temp){
        if(!it) return;
        binary(it->left, temp);
        temp.push_back(it->val);
        binary(it->right, temp);
    }
};
