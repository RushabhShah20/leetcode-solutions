// Problem: Maximum Alternating Sum of Squares
// Link to the problem: https://leetcode.com/problems/maximum-alternating-sum-of-squares/
public class Solution
{
    public long MaxAlternatingSum(int[] nums)
    {
        int n = nums.Length;
        long ans = 0;
        for (int i = 0; i < n; i++)
        {
            nums[i] *= nums[i];
        }
        Array.Sort(nums);
        for (int i = 0; i < n; i++)
        {
            if (i < (n >> 1))
            {
                ans -= nums[i];
            }
            else
            {
                ans += nums[i];
            }
        }
        return ans;
    }
}