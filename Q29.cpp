class Solution {
public:
    int divide(int dividend, int divisor) {
        if((long long int)dividend / divisor > pow(2,31) - 1)
            return pow(2,31) - 1;
        if((long long int)dividend / divisor < -pow(2,31))
            return -pow(2,31);
        return dividend / divisor;
    }
};
