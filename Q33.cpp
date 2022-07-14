class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int n = 0; n < nums.size(); n++)
            if(nums[n] == target)
                return n;
        return -1;
    }
};
