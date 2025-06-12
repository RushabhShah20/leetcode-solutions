// Problem: Maximum Nesting Depth of the Parentheses
// Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
class Solution
{
public:
    int maxDepth(string s)
    {
        int ans = 0, count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                count++;
                ans = max(ans, count);
            }
            if (s[i] == ')')
            {
                count--;
            }
        }
        return ans;
    }
};