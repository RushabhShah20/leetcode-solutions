// Problem: Maximize Active Section with Trade I
// Link to the problem: https://leetcode.com/problems/maximize-active-section-with-trade-i/
class Solution
{
public:
    int maxActiveSectionsAfterTrade(string s)
    {
        const int n = s.size();
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            x += s[i] - '0';
        }
        int i = 0, y = 0, a = INT_MIN, b = 0;
        while (i < n)
        {
            int j = i;
            while (i < n && s[i] == s[j])
            {
                i++;
            }
            if (s[j] == '0')
            {
                b = i - j;
                y = max(y, a + b);
                a = b;
            }
        }
        const int ans = x + y;
        return ans;
    }
};