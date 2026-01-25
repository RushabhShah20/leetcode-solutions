// Problem: Minimum Difference Between Highest and Lowest of K Scores
// Link to the problem: https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/
class Solution
{
public:
    int minimumDifference(vector<int> &nums, int k)
    {
        const int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = 100001;
        for (int i = 0; i < n - k + 1; i++)
        {
            ans = min(ans, nums[i + k - 1] - nums[i]);
        }
        return ans;
    }
};