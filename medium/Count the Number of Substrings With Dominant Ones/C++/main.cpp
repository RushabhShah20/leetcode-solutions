// Problem: Count the Number of Substrings With Dominant Ones
// Link to the problem: https://leetcode.com/problems/count-the-number-of-substrings-with-dominant-ones/
class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        int n = s.size();
        vector<int> x(n, n);
        for (int i = n - 2; i >= 0; i--)
        {
            if (s[i + 1] == '0')
            {
                x[i] = i + 1;
            }
            else
            {
                x[i] = x[i + 1];
            }
        }
        int ans = 0;
        for (int l = 0; l < n; l++)
        {
            int zeroes;
            if (s[l] == '0')
            {
                zeroes = 1;
            }
            else
            {
                zeroes = 0;
            }
            int r = l;
            while (zeroes * zeroes <= n)
            {
                int z;
                if (r < n)
                {
                    z = x[r];
                }
                else
                {
                    z = n;
                }
                int ones = (z - l) - zeroes;
                if (ones >= zeroes * zeroes)
                {
                    ans += min(z - r, ones - zeroes * zeroes + 1);
                }
                r = z;
                zeroes++;
                if (r == n)
                {
                    break;
                }
            }
        }
        return ans;
    }
};