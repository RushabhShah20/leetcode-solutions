// Problem: Largest Positive Integer That Exists With Its Negative
// Link to the problem: https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/
class Solution
{
public:
    int findMaxK(vector<int> &nums)
    {
        int ans = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (ans < nums[i])
            {
                if (find(nums.begin(), nums.end(), -1 * nums[i]) != nums.end())
                {
                    ans = nums[i];
                }
            }
        }
        return ans;
    }
};