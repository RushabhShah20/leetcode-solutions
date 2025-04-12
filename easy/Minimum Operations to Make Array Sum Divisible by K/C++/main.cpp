// Problem: Minimum Operations to Make Array Sum Divisible by K
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/
class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        int ans = sum % k;
        return ans;
    }
};