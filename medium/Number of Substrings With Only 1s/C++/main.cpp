// Problem: Number of Substrings With Only 1s
// Link to the problem: https://leetcode.com/problems/number-of-substrings-with-only-1s/
class Solution
{
public:
    int numSub(string s)
    {
        vector<int> x;
        int y = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                y++;
            }
            else
            {
                x.push_back(y);
                y = 0;
            }
        }
        if (y != 0)
        {
            x.push_back(y);
        }
        int ans = 0, mod = 1e9 + 7;
        for (int i = 0; i < x.size(); i++)
        {
            ans += ((((long long)(x[i]) * (long long)(x[i] + 1)) / 2) % mod);
        }
        return ans;
    }
};