// Problem: Find the Smallest Balanced Index
// Link to the problem: https://leetcode.com/problems/find-the-smallest-balanced-index/
class Solution
{
public:
    int smallestBalancedIndex(vector<int> &nums)
    {
        const int n = nums.size();
        if (n == 0)
        {
            return -1;
        }
        const long long x = 100000000000001;
        vector<long long> r(n);
        r[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            const long long y = nums[i + 1];
            if (r[i + 1] >= x || ((x / y) < r[i + 1]))
            {
                r[i] = x;
            }
            else
            {
                r[i] = r[i + 1] * y;
            }
        }
        long long l = 0;
        for (int i = 0; i < n; i++)
        {
            if (l == r[i])
            {
                return i;
            }
            l += nums[i];
        }
        return -1;
    }
};