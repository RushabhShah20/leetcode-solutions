// Problem: Maximum Ascending Subarray Sum
// Link to the problem: https://leetcode.com/problems/maximum-ascending-subarray-sum/
public class Solution
{
    public int MaxAscendingSum(int[] nums)
    {
        int ans = 0, sum = nums[0];
        for (int i = 1; i < nums.Length; i++)
        {
            if (nums[i] > nums[i - 1])
            {
                sum += nums[i];
            }
            else
            {
                ans = Math.Max(ans, sum);
                sum = nums[i];
            }
        }
        ans = Math.Max(ans, sum);
        return ans;
    }
}