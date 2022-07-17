class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int kase = 1;
        for(int n = 2; n <= nums.size(); n++)
            kase *= n;
        ans.push_back(nums);
        while(--kase){
            next_permutation(nums.begin(), nums.end());
            ans.push_back(nums);
        }
           
        return ans;
    }
};
