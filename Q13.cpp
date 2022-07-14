class Solution {
    public:
        int romanToInt(string s) {
            int ans = 0, n = -1;
            while(s[++n] == 'M')//thousand
                ans += 1000;

            if(s.substr(n, 2) == "CM"){//hundred
                ans += 900;
                n += 2;
            }

            else if(s.substr(n, 2) == "CD"){
                ans += 400;
                n += 2;
            }
            else{
                while(s[n] == 'C' || s[n] == 'D'){
                    if(s[n] == 'C')
                        ans += 100;
                    else
                        ans += 500;
                    n++;
                }
            }

            if(s.substr(n, 2) == "XC"){//ten
                ans += 90;
                n += 2;
            }

            else if(s.substr(n, 2) == "XL"){
                ans += 40;
                n += 2;
            }
            else{
                while(s[n] == 'X' || s[n] == 'L'){
                    if(s[n] == 'X')
                        ans += 10;
                    else
                        ans += 50;
                    n++;
                }
            }

            if(s.substr(n, 2) == "IX"){//one
                ans += 9;
                n += 2;
            }

            else if(s.substr(n, 2) == "IV"){
                ans += 4;
                n += 2;
            }
            else{
                while(s[n] == 'V' || s[n] == 'I'){
                    if(s[n] == 'I')
                        ans += 1;
                    else
                        ans += 5;
                    n++;
                }
            }
        return ans;
    }
};
