/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        solve(ans, "", 0, 0, n);
        return ans;
    }
    void solve(vector<string> &ans, string temp, int open, int close, int n)
    {
        if ((open == close) && (open == n))
        {
            ans.push_back(temp);
            return;
        }
        if (open < n)
            solve(ans, temp + "(", open + 1, close, n);
        if (close < open)
            solve(ans, temp + ")", open, close + 1, n);
    }
};
// @lc code=end
