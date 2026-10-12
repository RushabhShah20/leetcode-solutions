// Problem: Apply Operations on Array to Maximize Sum of Squares
// Link to the problem: https://leetcode.com/problems/apply-operations-on-array-to-maximize-sum-of-squares/
class Solution
{
public:
    int maxSum(vector<int> &nums, int k)
    {
        const int n = nums.size(), m = 1000000007;
        vector<int> a(30, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 30; j++)
            {
                a[j] += nums[i] >> j & 1;
            }
        }
        long long ans = 0;
        for (int i = 0; i < k; i++)
        {
            long long x = 0;
            for (int j = 29; j >= 0; j--)
            {
                if (a[j] > 0)
                {
                    x |= 1 << j;
                    a[j]--;
                }
            }
            ans = (ans + x * x) % m;
        }
        return ans;
    }
};