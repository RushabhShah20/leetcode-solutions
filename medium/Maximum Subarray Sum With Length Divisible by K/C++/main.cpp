// Problem: Maximum Subarray Sum With Length Divisible by K
// Link to the problem: https://leetcode.com/problems/maximum-subarray-sum-with-length-divisible-by-k/
class Solution
{
public:
    long long maxSubarraySum(vector<int> &nums, int k)
    {
        vector<long long> prefix(k, LLONG_MAX / 2);
        prefix[0] = 0;
        long long ans = LLONG_MIN;
        int n = nums.size();
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            ans = max(ans, sum - prefix[(i + 1) % k]);
            prefix[(i + 1) % k] = min(prefix[(i + 1) % k], sum);
        }
        return ans;
    }
};