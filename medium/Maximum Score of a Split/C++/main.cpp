// Problem: Maximum Score of a Split
// Link to the problem: https://leetcode.com/problems/maximum-score-of-a-split/
class Solution
{
public:
    long long maximumScore(vector<int> &nums)
    {
        const int n = nums.size();
        vector<long long> prefixSum(n), suffixMin(n);
        prefixSum[0] = nums[0];
        for (int i = 1; i < n; i++)
        {
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }
        suffixMin[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            suffixMin[i] = min(suffixMin[i + 1], (long long)(nums[i]));
        }
        long long ans = LLONG_MIN;
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, prefixSum[i] - suffixMin[i + 1]);
        }
        return ans;
    }
};