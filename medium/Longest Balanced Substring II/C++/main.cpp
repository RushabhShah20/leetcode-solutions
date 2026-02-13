// Problem: Longest Balanced Substring II
// Link to the problem: https://leetcode.com/problems/longest-balanced-substring-ii/
class Solution
{
public:
    int longestBalanced(string s)
    {
        const int n = s.length();
        int ans = 0;
        for (int k = 1; k < 8; ++k)
        {
            unordered_map<long long, int> m;
            m[0] = -1;
            int c[3] = {0, 0, 0};
            int x = 0;
            int p = -1, q = -1, r = -1;
            for (int j = 0; j < 3; ++j)
            {
                if ((k >> j) & 1)
                {
                    if (p == -1)
                    {
                        p = j;
                    }
                    else if (q == -1)
                    {
                        q = j;
                    }
                    else
                    {
                        r = j;
                    }
                    x++;
                }
            }
            for (int i = 0; i < n; ++i)
            {
                const int charIdx = s[i] - 'a';
                if (!((k >> charIdx) & 1))
                {
                    c[0] = c[1] = c[2] = 0;
                    m.clear();
                    m[0] = i;
                    continue;
                }
                c[charIdx]++;
                long long key = 0;
                if (x == 1)
                {
                    key = 0;
                }
                else if (x == 2)
                {
                    key = c[p] - c[q];
                }
                else
                {
                    const long long diff1 = c[p] - c[q];
                    const long long diff2 = c[p] - c[r];
                    key = (diff1 << 32) | (diff2 & 0xFFFFFFFFL);
                }
                if (m.count(key))
                {
                    ans = max(ans, i - m[key]);
                }
                else
                {
                    m[key] = i;
                }
            }
        }
        return ans;
    }
};
