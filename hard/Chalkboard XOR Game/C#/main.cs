// Problem: Chalkboard XOR Game
// Link to the problem: https://leetcode.com/problems/chalkboard-xor-game/
public class Solution
{
    public bool XorGame(int[] nums)
    {
        int total = 0, n = nums.Length;
        foreach (int num in nums)
        {
            total ^= num;
        }
        const bool a = total == 0, b = n % 2 == 0;
        const bool ans = a || b;
        return ans;
    }
}