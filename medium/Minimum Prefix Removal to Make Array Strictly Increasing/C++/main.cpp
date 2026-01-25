// Problem: Minimum Prefix Removal to Make Array Strictly Increasing
// Link to the problem: https://leetcode.com/problems/minimum-prefix-removal-to-make-array-strictly-increasing/
class Solution
{
public:
    int minimumPrefixLength(vector<int> &nums)
    {
        const int n = nums.size();
        for (int i = n - 1; i >= 1; i--)
        {
            if (nums[i] <= nums[i - 1])
            {
                return i;
            }
        }
        return 0;
    }
};