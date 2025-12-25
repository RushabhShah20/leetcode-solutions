// Problem: Rearrange Array to Maximize Prefix Score
// Link to the problem: https://leetcode.com/problems/rearrange-array-to-maximize-prefix-score/
class Solution
{
public:
    int maxScore(vector<int> &nums)
    {
        int n = nums.size(), ans = 0;
        sort(nums.begin(), nums.end(), greater<int>());
        long long sum = 0;
        for (const int &num : nums)
        {
            sum += num;
            if (sum > 0)
            {
                ans++;
            }
        }
        return ans;
    }
};