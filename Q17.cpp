class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        if(digits.empty())
            return vector<string>();
        vector<string> ans(1);
        string number[10] = {"", "","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        for(int i = 0; i < digits.size(); i++){
            vector<string> temp;
            string num = number[digits[i] - '0'];
            
            for(int j = 0; j < num.size(); j++)
                for(int k = 0; k < ans.size(); k++)
                    temp.push_back(ans[k] + num[j]);
            ans = temp;
        }
        return ans;
    }
};
