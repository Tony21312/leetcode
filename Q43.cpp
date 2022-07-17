class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0")//special cases
            return "0";
        if(num1 == "1")
            return num2;
        if(num2 == "1")
            return num1;
        
        int multiplicand[201] = {}, multiplier[201] = {};
        for(int n = num1.size() - 1; n >= 0; n--)//string to int array
            multiplicand[n] = num1[num1.size() - 1 - n] - '0';
        for(int n = num2.size() - 1; n >= 0; n--)
            multiplier[n] = num2[num2.size() - 1 - n] - '0';
        
        int product[400] = {}, size = num1.size() + num2.size();
        for(int i = 0; i < num1.size(); i++)//multiply
            for(int j = 0; j < num2.size(); j++)
                product[i + j] += multiplicand[i] * multiplier[j];
        
        for(int n = 0; n < size; n++)
            if(product[n] >= 10){
                product[n + 1] += product[n] / 10;
                product[n] %= 10;
            }
        
        while(product[size - 1] == 0)
            size--;
        string ans;
        for(int n = size - 1; n >= 0; n--){
            ans.push_back(product[n] + '0');
        }
        return ans;
    }
};
