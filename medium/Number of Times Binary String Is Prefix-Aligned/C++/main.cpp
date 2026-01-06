// Problem: Number of Times Binary String Is Prefix-Aligned
// Link to the problem: https://leetcode.com/problems/number-of-times-binary-string-is-prefix-aligned/
class Solution
{
public:
    int numTimesAllBlue(vector<int> &flips)
    {
        const int n = flips.size();
        int ans = 0;
        long long y = 0;
        for (int i = 0; i < n; i++)
        {
            y += flips[i];
            long long x = (((long long)(i + 1) * (long long)(i + 2)) / (long long)(2));
            if (x == y)
            {
                ans++;
            }
        }
        return ans;
    }
};