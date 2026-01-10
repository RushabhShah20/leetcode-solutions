// Problem: Maximum Nesting Depth of Two Valid Parentheses Strings
// Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/
class Solution
{
public:
    vector<int> maxDepthAfterSplit(string seq)
    {
        const int n = seq.size();
        vector<int> ans(n, 0);
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (seq[i] == '(')
            {
                ans[i] = x % 2;
                x++;
            }
            else
            {
                x--;
                ans[i] = x % 2;
            }
        }
        return ans;
    }
};