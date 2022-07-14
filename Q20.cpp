class Solution {
    public:
        bool isValid(string s) {
            stack<char>temp;
            for (int n = 0; n < s.size(); n++) {
                switch (s[n]) {
                case '(':
                case '[':
                case '{':
                    temp.push(s[n]);
                    break;
                case ')':
                    if (temp.empty() || temp.top() != '(')
                        return false;
                    else
                        temp.pop();
                    break;
                case ']':
                    if (temp.empty() || temp.top() != '[')
                        return false;
                    else
                        temp.pop();
                    break;
                case '}':
                    if (temp.empty() || temp.top() != '{')
                        return false;
                    else
                        temp.pop();
                    break;
                }
            }
        return temp.empty();
    }
};
