// Problem: Compute Alternating Sum
// Link to the problem: https://leetcode.com/problems/compute-alternating-sum/
class Solution
{
public:
    int alternatingSum(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                ans += nums[i];
            }
            else
            {
                ans -= nums[i];
            }
        }
        return ans;
    }
};