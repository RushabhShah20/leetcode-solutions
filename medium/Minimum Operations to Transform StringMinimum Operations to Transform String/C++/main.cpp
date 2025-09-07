// Problem: Minimum Operations to Transform String
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-transform-string/
class Solution
{
public:
    int minOperations(string s)
    {
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int x = (('a' - s[i] + 26) % 26);
            ans = max(ans, x);
        }
        return ans;
    }
};