// Problem: Count Valid Prefixes
// Link to the problem: https://leetcode.com/problems/count-valid-prefixes/
class Solution
{
public:
    int countValidPrefixes(string s)
    {
        const int n = s.size();
        int ans = 0, x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            s[i] == '0' ? x++ : y++;
            ans += abs(x - y) <= 1 ? 1 : 0;
        }
        return ans;
    }
};