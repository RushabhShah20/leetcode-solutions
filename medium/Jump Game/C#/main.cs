// Problem: Jump Game
// Link to the problem: https://leetcode.com/problems/jump-game/
public class Solution
{
    public bool CanJump(int[] nums)
    {
        int n = nums.Length, x = 0;
        for (int i = 0; i < n; i++)
        {
            if (i > x)
            {
                return false;
            }
            x = Math.Max(x, i + nums[i]);
        }
        return true;
    }
}