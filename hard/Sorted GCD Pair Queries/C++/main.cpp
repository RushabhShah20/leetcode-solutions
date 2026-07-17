// Problem: Sorted GCD Pair Queries
// Link to the problem: https://leetcode.com/problems/sorted-gcd-pair-queries/
class Solution
{
public:
    vector<int> gcdValues(vector<int> &nums, vector<long long> &queries)
    {
        const int n = nums.size();
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, nums[i]);
        }
        vector<long long> a(mx + 1);
        for (int i = 0; i < n; i++)
        {
            a[nums[i]]++;
        }
        for (int i = 1; i <= mx; i++)
        {
            for (int j = 2 * i; j <= mx; j += i)
            {
                a[i] += a[j];
            }
        }
        for (int i = 1; i <= mx; i++)
        {
            a[i] = a[i] * (a[i] - 1) / 2;
        }
        for (int i = mx; i >= 1; i--)
        {
            for (int j = 2 * i; j <= mx; j += i)
            {
                a[i] -= a[j];
            }
        }
        for (int i = 1; i <= mx; i++)
        {
            a[i] += a[i - 1];
        }
        const int m = queries.size();
        vector<int> ans(m);
        for (int i = 0; i < m; i++)
        {
            ans[i] = lower_bound(a.begin(), a.end(), queries[i] + 1) - a.begin();
        }
        return ans;
    }
};