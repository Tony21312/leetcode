class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            if(nums.size() < 1)
                return 0;
            vector<int>::iterator it1 = nums.begin();
            vector<int>::iterator it2 = nums.begin() + 1;
            int n = 0;
            for(; it2 != nums.end(); it2++){
                if(*it1 != *it2){
                    n++;
                    it1++;
                }
                *it1 = *it2;
            }
            return n + 1;
    }
};
