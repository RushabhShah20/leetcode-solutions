// Problem: Removing Minimum and Maximum From Array
// Link to the problem: https://leetcode.com/problems/removing-minimum-and-maximum-from-array/
public class Solution
{
    public int MinimumDeletions(int[] nums)
    {
        int n = nums.Length;
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > nums[x])
            {
                x = i;
            }
            else if (nums[i] < nums[y])
            {
                y = i;
            }
        }
        int a = Math.Max(x, y) + 1;
        int b = n - Math.Min(x, y);
        int c = (Math.Min(x, y) + 1) + (n - Math.Max(x, y));
        int ans = Math.Min(a, Math.Min(b, c));
        return ans;
    }
}