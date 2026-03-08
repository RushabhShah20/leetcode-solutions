// Problem: Minimum Operations to Sort a String
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-sort-a-string/
class Solution
{
public:
    int minOperations(string s)
    {
        const int n = s.size();
        if (n < 2)
        {
            return 0;
        }
        bool x = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] > s[i + 1])
            {
                x = false;
                break;
            }
        }
        if (x)
        {
            return 0;
        }
        char mx = s[0], mn = s[0];
        for (int i = 1; i < n; i++)
        {
            mn = min(mn, s[i]);
            mx = max(mx, s[i]);
        }
        if (mn == s[0] || mx == s[n - 1])
        {
            return 1;
        }
        if (mx == s[0] && mn == s[n - 1])
        {
            if (n == 2)
            {
                return -1;
            }
            bool y = false;
            for (int i = 1; i < n - 1; i++)
            {
                if (s[i] == mn || s[i] == mx)
                {
                    y = true;
                    break;
                }
            }
            if (y)
            {
                return 2;
            }
            else
            {
                return 3;
            }
        }
        return 2;
    }
};