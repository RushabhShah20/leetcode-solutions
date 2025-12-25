// Problem: Maximum Median Sum of Subsequences of Size 3
// Link to the problem: https://leetcode.com/problems/maximum-median-sum-of-subsequences-of-size-3/
class Solution
{
public:
    long long maximumMedianSum(vector<int> &nums)
    {
        long long ans = 0, n = nums.size(), i = 0, j = n - 1;
        sort(nums.begin(), nums.end());
        while (i < j)
        {
            ans += nums[j - 1];
            i++;
            j -= 2;
        }
        return ans;
    }
};