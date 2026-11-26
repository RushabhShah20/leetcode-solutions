// Problem: Check if an Array Is Consecutive
// Link to the problem: https://leetcode.com/problems/check-if-an-array-is-consecutive/
class Solution
{
public:
    bool isConsecutive(vector<int> &nums)
    {
        const int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; i++)
        {
            if (nums[i] - nums[i - 1] != 1)
            {
                return false;
            }
        }
        return true;
    }
};