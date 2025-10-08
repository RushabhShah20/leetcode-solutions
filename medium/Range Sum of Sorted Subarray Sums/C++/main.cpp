// Problem: Range Sum of Sorted Subarray Sums
// Link to the problem: https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/
class Solution
{
public:
    int rangeSum(vector<int> &nums, int n, int left, int right)
    {
        int ans = 0, mod = 1e9 + 7;
        vector<int> prefixSum;
        for (int i = 0; i < nums.size(); i++)
        {
            int sum = nums[i];
            prefixSum.push_back(sum);
            for (int j = i + 1; j < nums.size(); j++)
            {
                sum = ((sum + nums[j]) % mod);
                prefixSum.push_back(sum);
            }
        }
        sort(prefixSum.begin(), prefixSum.end());
        for (int i = left - 1; i < right; i++)
        {
            ans = ((ans + prefixSum[i]) % mod);
        }
        return ans;
    }
};