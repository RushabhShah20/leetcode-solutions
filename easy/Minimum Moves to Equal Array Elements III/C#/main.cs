// Problem: Minimum Moves to Equal Array Elements III
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
public class Solution
{
    public int MinMoves(int[] nums)
    {
        int n = nums.Length;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            mx = Math.Max(mx, nums[i]);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += mx - nums[i];
        }
        return ans;
    }
}