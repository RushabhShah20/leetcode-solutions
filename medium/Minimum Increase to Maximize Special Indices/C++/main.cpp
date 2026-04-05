// Problem: Minimum Increase to Maximize Special Indices
// Link to the problem: https://leetcode.com/problems/minimum-increase-to-maximize-special-indices/
class Solution
{
public:
    long long minIncrease(vector<int> &nums)
    {
        const int n = nums.size();
        if (n & 1)
        {
            long long ans = 0;
            for (int i = 1; i < n - 1; i += 2)
            {
                ans += max(0, max(nums[i - 1], nums[i + 1]) + 1 - nums[i]);
            }
            return ans;
        }
        else
        {
            const int k = (n - 2) / 2;
            vector<long long> a(k + 1), b(k + 1);
            for (int i = 1; i <= k; i++)
            {
                const int x = 2 * i - 1;
                a[i] = a[i - 1] + max(0, max(nums[x - 1], nums[x + 1]) + 1 - nums[x]);
            }
            for (int i = 1; i <= k; i++)
            {
                const int x = n - 2 * i;
                b[i] = b[i - 1] + max(0, max(nums[x - 1], nums[x + 1]) + 1 - nums[x]);
            }
            long long ans = LLONG_MAX;
            for (int i = 0; i <= k; i++)
            {
                const long long x = a[i] + b[k - i];
                ans = min(ans, x);
            }
            return ans;
        }
    }
};