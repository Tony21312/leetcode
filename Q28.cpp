class Solution {
public:
    int strStr(string haystack, string needle) {
        return (haystack.find(needle) < 0) ? -1 :haystack.find(needle);
    }
};
