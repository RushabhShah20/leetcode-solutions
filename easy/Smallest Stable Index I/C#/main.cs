// Problem: Smallest Stable Index I
// Link to the problem: https://leetcode.com/problems/smallest-stable-index-i/
public class Solution
{
    public int FirstStableIndex(int[] nums, int k)
    {
        int n = nums.Length;
        int[] mn = new int[n], mx = new int[n];
        mx[0] = nums[0];
        for (int i = 1; i < n; i++)
        {
            mx[i] = Math.Max(mx[i - 1], nums[i]);
        }
        mn[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            mn[i] = Math.Min(mn[i + 1], nums[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (mx[i] - mn[i] <= k)
            {
                return i;
            }
        }
        return -1;
    }
}