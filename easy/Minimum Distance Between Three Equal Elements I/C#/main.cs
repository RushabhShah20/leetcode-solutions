// Problem: Minimum Distance Between Three Equal Elements I
// Link to the problem: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/
public class Solution
{
    public int MinimumDistance(int[] nums)
    {
        int n = nums.Length;
        int ans = Int32.MaxValue;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (nums[i] == nums[j] && nums[j] == nums[k])
                    {
                        ans = Math.Min(ans, Math.Abs(i - j) + Math.Abs(j - k) + Math.Abs(k - i));
                    }
                }
            }
        }
        return ((ans == Int32.MaxValue) ? (-1) : (ans));
    }
}