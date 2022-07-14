class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0, temp = 0;
        for (int i = 0; i < s.size(); i++) {
            int dict[150] = {};
            temp = 0;
           
            for(int j = i; j < s.size(); j++, temp++){
                if(++dict[s[j]] > 1)
                    break;
            }
            if(temp > maxLen)
                maxLen = temp;
        }
        return maxLen;
    }
};
