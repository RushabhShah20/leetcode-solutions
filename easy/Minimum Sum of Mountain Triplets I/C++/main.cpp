// Problem: Minimum Sum of Mountain Triplets I
// Link to the problem: https://leetcode.com/problems/minimum-sum-of-mountain-triplets-i/
class Solution
{
public:
    int minimumSum(vector<int> &nums)
    {
        int ans = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    if (nums[i] < nums[j] && nums[k] < nums[j])
                    {
                        ans = min(ans, nums[i] + nums[j] + nums[k]);
                    }
                }
            }
        }
        return ((ans == INT_MAX) ? (-1) : (ans));
    }
};