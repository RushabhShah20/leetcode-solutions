// Problem: Rotate Function
// Link to the problem: https://leetcode.com/problems/rotate-function/
public class Solution
{
    public int MaxRotateFunction(int[] nums)
    {
        int n = nums.Length, x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            x += nums[i];
            y += i * nums[i];
        }
        int ans = y;
        for (int i = n - 1; i >= 0; i--)
        {
            y = y + x - n * nums[i];
            ans = Math.Max(ans, y);
        }
        return ans;
    }
}