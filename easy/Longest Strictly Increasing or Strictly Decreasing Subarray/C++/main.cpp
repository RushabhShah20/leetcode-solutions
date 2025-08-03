// Problem: Longest Strictly Increasing or Strictly Decreasing Subarray
// Link to the problem: https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/
class Solution
{
public:
    int longestMonotonicSubarray(vector<int> &nums)
    {
        int ansIncreasing = 1, ansDecreasing = 1, maxIncreasing = 1, maxDecreasing = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > nums[i - 1])
            {
                maxIncreasing++;
                ansIncreasing = max(ansIncreasing, maxIncreasing);
                maxDecreasing = 1;
            }
            else if (nums[i] < nums[i - 1])
            {
                maxDecreasing++;
                ansDecreasing = max(ansDecreasing, maxDecreasing);
                maxIncreasing = 1;
            }
            else
            {
                maxIncreasing = 1;
                maxDecreasing = 1;
            }
        }
        return max(ansIncreasing, ansDecreasing);
    }
};