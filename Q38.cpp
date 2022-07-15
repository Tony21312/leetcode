class Solution {
    public:
        string countAndSay(int n) {
            if (n == 1)
                return "1";
            
            string ans = "1";
            for (int i = 1; i < n; i++) {
                string temp;
                for (int j = 0, count = 1; j < ans.size(); j += count) {
                    count = 1;
                    while (ans[j] == ans[j + count])
                        count++;
                    temp += count + '0';     
                    temp += ans[j];
                }
                ans = temp;
            }
        return ans;
    }
};
