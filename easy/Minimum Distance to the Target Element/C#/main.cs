// Problem: Minimum Distance to the Target Element
// Link to the problem: https://leetcode.com/problems/minimum-distance-to-the-target-element/
public class Solution
{
    public int GetMinDistance(int[] nums, int target, int start)
    {
        int n = nums.Length, ans = 1000000000;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                ans = Math.Min(Math.Abs(i - start), ans);
            }
        }
        return ans;
    }
}