// Problem: Process String with Special Operations II
// Link to the problem: https://leetcode.com/problems/process-string-with-special-operations-ii/
class Solution
{
public:
    char processStr(string s, long long k)
    {
        const int n = s.size();
        long long m = 0;
        for (int i = 0; i < n; i++)
        {
            const char c = s[i];
            if (c == '*')
            {
                if (m > 0)
                {
                    m--;
                }
            }
            else if (c == '#')
            {
                m <<= 1;
            }
            else if (c == '%')
            {
                continue;
            }
            else
            {
                m++;
            }
        }
        if (k + 1 > m)
        {
            return '.';
        }
        for (int i = n - 1; i >= 0; i--)
        {
            const char c = s[i];
            if (c == '*')
            {
                m++;
            }
            else if (c == '#')
            {
                if (k + 1 > (m + 1) / 2)
                {
                    k -= m / 2;
                }
                m = (m + 1) / 2;
            }
            else if (c == '%')
            {
                k = m - k - 1;
            }
            else
            {
                if (k + 1 == m)
                {
                    return c;
                }
                m--;
            }
        }
        return '.';
    }
};