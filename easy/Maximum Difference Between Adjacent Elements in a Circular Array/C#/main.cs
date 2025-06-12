// Problem: Maximum Difference Between Adjacent Elements in a Circular Array
// Link to the problem: https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/
public class Solution
{
    public int MaxAdjacentDistance(int[] nums)
    {
        int ans = 0;
        for (int i = 1; i < nums.Length; i++)
        {
            ans = Math.Max(Math.Abs(nums[i] - nums[i - 1]), ans);
        }
        ans = Math.Max(Math.Abs(nums[nums.Length - 1] - nums[0]), ans);
        return ans;
    }
}