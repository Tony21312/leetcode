class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        long long int temp = 0;
        bool minus = 0;
        while (s[i++] == ' ');

        if (s[--i] == '-' || s[i] == '+' || (s[i] >= '0' && s[i] <= '9')) {
            if (s[i++] == '-')minus = 1;
            else if (s[i - 1] == '+');
            else--i;
        }
        else
            return 0;

        while (s[i] >= '0' && s[i] <= '9') {
            if (temp > INT_MAX / 10 || (temp == INT_MAX / 10 && s[i] - '0' > 7)) {
                if (minus == 0) return INT_MAX;
                else return INT_MIN;
            }
            temp = 10 * temp + (s[i++] - '0');
        }
        return (minus) ? -1 * temp : temp;
    }
};
