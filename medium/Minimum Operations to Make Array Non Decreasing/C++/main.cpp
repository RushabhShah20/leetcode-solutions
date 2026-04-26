// Problem: Minimum Operations to Make Array Non Decreasing
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-array-non-decreasing/
class Solution
{
public:
    long long minOperations(vector<int> &nums)
    {
        const int n = nums.size();
        long long ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                ans += nums[i] - nums[i + 1];
            }
        }
        return ans;
    }
};