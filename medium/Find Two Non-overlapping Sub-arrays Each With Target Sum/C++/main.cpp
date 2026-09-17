// Problem: Find Two Non-overlapping Sub-arrays Each With Target Sum
// Link to the problem: https://leetcode.com/problems/find-two-non-overlapping-sub-arrays-each-with-target-sum/
class Solution
{
public:
    int minSumOfLengths(vector<int> &arr, int target)
    {
        const int n = arr.size();
        int x = n + 1, y = 0;
        vector<int> dp(n + 1, n);
        for (int l = 0, r = 0; r < n; r++)
        {
            y += arr[r];
            while (y > target)
            {
                y -= arr[l];
                l++;
            }
            dp[r + 1] = dp[r];
            if (y == target)
            {
                x = min(x, r - l + 1 + dp[l]);
                dp[r + 1] = min(dp[r], r - l + 1);
            }
        }
        const int ans = x == n + 1 ? -1 : x;
        return ans;
    }
};
