// Problem: Maximum Nesting Depth of Two Valid Parentheses Strings
// Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/
class Solution
{
public:
    vector<int> maxDepthAfterSplit(string seq)
    {
        const int n = seq.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = (i & 1) ^ (seq[i] == '(');
        }
        return ans;
    }
};