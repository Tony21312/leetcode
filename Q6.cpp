class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <= 1)
            return s;
        
        string str;
        int loop = numRows + (numRows - 2);
        for(int i = 0; i < numRows; i++){
            for(int j = i; j < s.size(); j += loop){
                if(j % loop == 0 || j % loop == loop / 2){
                    str.push_back(s[j]);
                }
                else{
                    
                    str.push_back(s[j]);
                    if(j + loop - 2 * i < s.size())
                        str.push_back(s[j + loop - 2 * i]);
                }
            }
        }
        return str;
    }
};
