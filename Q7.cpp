class Solution {
public:
    int reverse(int x) {
        long long int temp = 0;

        while(x){
            temp = temp * 10 + x % 10;
            x /= 10;
        }

        return (temp < INT_MIN || temp > INT_MAX)? 0 : temp;
    }
};
