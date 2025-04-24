
// Problem: Left and Right Sum Differences
// Link to the problem: https://leetcode.com/problems/left-and-right-sum-differences/
public class Solution
{
    public int[] LeftRightDifference(int[] nums)
    {
        int[] ans = new int[nums.Length], left = new int[nums.Length], right = new int[nums.Length];
        int sum = 0;
        for (int i = 0; i < nums.Length; i++)
        {
            left[i] = sum;
            sum += nums[i];
        }
        sum = 0;
        for (int i = nums.Length - 1; i >= 0; i--)
        {
            right[i] = sum;
            sum += nums[i];
        }
        for (int i = 0; i < nums.Length; i++)
        {
            ans[i] = Math.Abs(left[i] - right[i]);
        }
        return ans;
    }
}