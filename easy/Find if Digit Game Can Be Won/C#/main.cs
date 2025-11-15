// Problem: Find if Digit Game Can Be Won
// Link to the problem: https://leetcode.com/problems/find-if-digit-game-can-be-won/
public class Solution
{
    public bool CanAliceWin(int[] nums)
    {
        int x = 0;
        int y = 0;
        foreach (int num in nums)
        {
            if (num / 10 == 0)
            {
                x += num;
            }
            else
            {
                y += num;
            }
        }
        return x != y;
    }
}