// Problem: Maximum Alternating Sum of Squares
// Link to the problem: https://leetcode.com/problems/maximum-alternating-sum-of-squares/
class Solution
{
public:
    long long maxAlternatingSum(vector<int> &nums)
    {
        const int n = nums.size();
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            nums[i] *= nums[i];
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++)
        {
            if (i < (n >> 1))
            {
                ans -= nums[i] * nums[i];
            }
            else
            {
                ans += nums[i] * nums[i];
            }
        }
        return ans;
    }
};