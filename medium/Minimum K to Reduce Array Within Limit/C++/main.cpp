// Problem: Minimum K to Reduce Array Within Limit
// Link to the problem: https://leetcode.com/problems/minimum-k-to-reduce-array-within-limit/
class Solution
{
public:
    int minimumK(vector<int> &nums)
    {
        long long l = 1, r = 100000, ans = r;
        while (l <= r)
        {
            const long long m = l + (r - l) / 2;
            if (m == 0)
            {
                l = 1;
                continue;
            }
            long long y = 0;
            for (const int num : nums)
            {
                y += ((num + m - 1) / m);
                if (y > m * m)
                {
                    break;
                }
            }
            if (y <= m * m)
            {
                ans = m;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        return ans;
    }
};