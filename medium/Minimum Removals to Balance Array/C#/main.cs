// Problem: Minimum Removals to Balance Array
// Link to the problem: https://leetcode.com/problems/minimum-removals-to-balance-array/
public class Solution
{
    public int MinRemoval(int[] nums, int k)
    {
        int n = nums.Length, i = 0, ans = 0;
        Array.Sort(nums);
        for (int j = 0; j < n; j++)
        {
            while ((long)nums[j] > (long)nums[i] * k)
            {
                i++;
            }
            ans = Math.Max(ans, j - i + 1);
        }
        ans = n - ans;
        return ans;
    }
}