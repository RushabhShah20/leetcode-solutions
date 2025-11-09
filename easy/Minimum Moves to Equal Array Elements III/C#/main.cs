// Problem: Minimum Moves to Equal Array Elements III
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
public class Solution
{
    public int MinMoves(int[] nums)
    {
        int ans = 0;
        int x = nums.Max();
        foreach (int num in nums)
        {
            ans += (x - num);
        }
        return ans;
    }
}