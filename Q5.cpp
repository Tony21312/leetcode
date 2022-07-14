class Solution {
public:
    void expand(string s, int beg, int fin, int& size, int& start) {
        while (beg >= 0 && fin < s.size() && s[beg] == s[fin]) {
            beg--; fin++;
        }
        if (size < fin - beg - 1) {
            size = fin - beg - 1;
            start = beg + 1;
        }
    }
    string longestPalindrome(string s) {
        if (s.size() <= 1)
            return s;

        int size = 0, start = 0;
        for (int n = 0; n < s.size() - 1; n++) {
            expand(s, n, n, size, start);
            expand(s, n, n + 1, size, start);
        }

        return s.substr(start, size);
    }
};
