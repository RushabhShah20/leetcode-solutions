// Problem: Longest Even Odd Subarray With Threshold
// Link to the problem: https://leetcode.com/problems/longest-even-odd-subarray-with-threshold/
class Solution
{
public:
    int longestAlternatingSubarray(vector<int> &nums, int threshold)
    {
        const int n = nums.size();
        int i = 0, j = 0, ans = 0;
        while (j < n)
        {
            if (nums[j] % 2 == 0 && nums[j] <= threshold)
            {
                i = j;
                j++;
                while (j < n && nums[j] <= threshold && nums[j] % 2 != nums[j - 1] % 2)
                {
                    j++;
                }
                ans = max(ans, j - i);
            }
            else
            {
                j++;
            }
        }
        return ans;
    }
};