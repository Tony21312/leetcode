class Solution {
    public:
        void nextPermutation(vector<int>& nums) {
            int i = nums.size() - 1, j = i, k = i;
            for (; j > 0; j--)
                if (nums[j] > nums[j - 1])
                    break;

            if (j <= 0)
                reverse(nums.begin(), nums.end());
            else {
                for (; k >= j - 1; k--) {
                    if (nums[k] > nums[j - 1])
                        break;
            }
            swap(nums[j -1], nums[k]);
            reverse(nums.begin() + j, nums.end());
        }
    }
};
