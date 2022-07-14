class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1, end = -1;
        int n = 0;
        for(; n < nums.size(); n++){
            if(nums[n] == target){
                start = n;
                break;
            }
        }
        for(int m = n; m < nums.size(); m++)
            if(nums[m] == target)
                end = m;   
        
        return {start, end};
    }
};
