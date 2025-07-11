// Problem: Sum of Variable Length Subarrays
// Link to the problem: https://leetcode.com/problems/sum-of-variable-length-subarrays/
class Solution
{
public:
    int subarraySum(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = max(0, i - nums[i]); j <= i; j++)
            {
                ans += nums[j];
            }
        }
        return ans;
    }
};