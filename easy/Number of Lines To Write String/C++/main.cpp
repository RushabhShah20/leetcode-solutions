// Problem: Number of Lines To Write String
// Link to the problem: https://leetcode.com/problems/number-of-lines-to-write-string/
class Solution
{
public:
    vector<int> numberOfLines(vector<int> &widths, string s)
    {
        vector<int> ans(2, 0);
        ans[0] = 1;
        for (char c : s)
        {
            ans[1] += widths[c - 'a'];
            if (ans[1] > 100)
            {
                ans[0]++;
                ans[1] = widths[c - 'a'];
            }
        }
        return ans;
    }
};