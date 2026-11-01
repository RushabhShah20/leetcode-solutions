// Problem: Minimum Moves to Equal Array Elements
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
public class Solution
{
    public int MinMoves(int[] nums)
    {
        int n = nums.Length, ans = 0, mn = 1000000001;
        for (int i = 0; i < n; i++)
        {
            mn = Math.Min(mn, nums[i]);
        }
        for (int i = 0; i < n; i++)
        {
            ans += nums[i] - mn;
        }
        return ans;
    }
}