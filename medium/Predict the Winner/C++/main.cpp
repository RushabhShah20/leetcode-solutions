// Problem: Predict the Winner
// Link to the problem: https://leetcode.com/problems/predict-the-winner/
class Solution
{
public:
    bool predictTheWinner(vector<int> &nums)
    {
        const int n = nums.size();
        vector<int> dp = nums;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < n - i; j++)
            {
                const int k = i + j;
                dp[j] = max(nums[j] - dp[j + 1], nums[k] - dp[j]);
            }
        }
        const bool ans = dp[0] >= 0;
        return ans;
    }
};