// Problem: Maximum Frequency of an Element After Performing Operations II
// Link to the problem: https://leetcode.com/problems/maximum-frequency-of-an-element-after-performing-operations-ii/
class Solution
{
public:
    int check(vector<int> &nums, int n, int t, int m)
    {
        long long a = n;
        long long b = t;
        int l = lower_bound(nums.begin(), nums.end(), a) - nums.begin();
        int r = upper_bound(nums.begin(), nums.end(), a) - nums.begin();
        int d = lower_bound(nums.begin(), nums.end(), a - b) - nums.begin();
        int u = upper_bound(nums.begin(), nums.end(), a + b) - nums.begin();
        int ans = (u - r) + (l - d);
        return min(m, ans) + (r - l);
    }
    int maxFrequency(vector<int> &nums, int k, int numOperations)
    {
        int m = numOperations, n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = 1;
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(check(nums, nums[i], k, m), ans);
            ans = max(check(nums, nums[i] - k, k, m), ans);
            ans = max(check(nums, nums[i] + k, k, m), ans);
        }
        return ans;
    }
};