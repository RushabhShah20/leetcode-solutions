// Problem: Longest Alternating Subarray After Removing At Most One Element
// Link to the problem: https://leetcode.com/problems/longest-alternating-subarray-after-removing-at-most-one-element/
class Solution
{
public:
    int longestAlternating(vector<int> &nums)
    {
        const int n = nums.size();
        vector<vector<int>> dp1(n, vector<int>(2)), dp2(n, vector<int>(2));
        dp1[0][0] = 1;
        dp2[0][0] = 1;
        dp1[0][1] = 0;
        dp2[0][1] = 0;
        for (int i = 1; i < n; i++)
        {
            dp1[i][0] = 1;
            if (nums[i] > nums[i - 1])
            {
                dp1[i][0] = 1 + dp2[i - 1][0];
            }
            dp1[i][1] = 1;
            if (nums[i] > nums[i - 1])
            {
                dp1[i][1] = 1 + dp2[i - 1][1];
            }
            if (i >= 2 && nums[i] > nums[i - 2])
            {
                dp1[i][1] = max(dp1[i][1], 1 + dp2[i - 2][0]);
            }
            dp2[i][0] = 1;
            if (nums[i] < nums[i - 1])
            {
                dp2[i][0] = 1 + dp1[i - 1][0];
            }
            dp2[i][1] = 1;
            if (nums[i] < nums[i - 1])
            {
                dp2[i][1] = 1 + dp1[i - 1][1];
            }
            if (i >= 2 && nums[i] < nums[i - 2])
            {
                dp2[i][1] = max(dp2[i][1], 1 + dp1[i - 2][0]);
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                ans = max({ans, dp1[i][j], dp2[i][j]});
            }
        }
        return ans;
    }
};