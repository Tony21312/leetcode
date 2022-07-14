class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int n = 0; n < nums.size(); n++){
            if(nums[n] >= target){
                return n;
            }
        }
        return nums.size();
    }
};
