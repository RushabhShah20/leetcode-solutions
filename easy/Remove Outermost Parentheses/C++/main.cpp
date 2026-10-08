// Problem: Remove Outermost Parentheses
// Link to the problem: https://leetcode.com/problems/remove-outermost-parentheses/
class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        const int n = s.size();
        int x = 0;
        string ans;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ')')
            {
                x--;
            }
            if (x > 0)
            {
                ans.append(1, s[i]);
            }
            if (s[i] == '(')
            {
                x++;
            }
        }
        return ans;
    }
};