// Problem: Minimum Difference Between Highest and Lowest of K Scores
// Link to the problem: https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/
public class Solution
{
    public int MinimumDifference(int[] nums, int k)
    {
        int n = nums.Length;
        Array.Sort(nums);
        int ans = 100001;
        for (int i = 0; i < n - k + 1; i++)
        {
            ans = Math.Min(ans, nums[i + k - 1] - nums[i]);
        }
        return ans;
    }
}