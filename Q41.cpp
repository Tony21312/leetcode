class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.empty())
            return 1;
        sort(nums.begin(), nums.end());
        int m = 1;
        for(int n = 0; n < nums.size(); n++){
            if(nums[n] == m)
                m++;
            if(nums[n] > m + 1)
                break;
        }

        return m;
    }
};
