// Problem: Count Substrings That Satisfy K-Constraint I
// Link to the problem: https://leetcode.com/problems/count-substrings-that-satisfy-k-constraint-i/
class Solution
{
public:
    int countKConstraintSubstrings(string s, int k)
    {
        int ans = 0, n = s.size();
        for (int j = 1; j <= n; j++)
        {
            int count0 = 0, count1 = 0;
            for (int i = 0; i < n; i++)
            {
                if (i >= j)
                {
                    if (s[i] == '0')
                    {
                        count0++;
                    }
                    else
                    {
                        count1++;
                    }
                    if (s[i - j] == '0')
                    {
                        count0--;
                    }
                    else
                    {
                        count1--;
                    }
                }
                else
                {
                    if (s[i] == '0')
                    {
                        count0++;
                    }
                    else
                    {
                        count1++;
                    }
                }
                if (i >= (j - 1))
                {
                    if (count0 <= k || count1 <= k)
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};