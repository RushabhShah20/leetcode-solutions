// Problem: Longest Continuous Increasing Subsequence
// Link to the problem: https://leetcode.com/problems/longest-continuous-increasing-subsequence/
class Solution
{
public:
    int findLengthOfLCIS(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = 1, count = 1;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] > nums[i - 1])
            {
                count++;
            }
            else
            {
                ans = max(ans, count);
                count = 1;
            }
        }
        ans = max(ans, count);
        return ans;
    }
};