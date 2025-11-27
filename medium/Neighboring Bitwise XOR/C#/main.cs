// Problem: Neighboring Bitwise XOR
// Link to the problem: https://leetcode.com/problems/neighboring-bitwise-xor/
public class Solution
{
    public bool DoesValidArrayExist(int[] derived)
    {
        int ans = 1;
        foreach (int derive in derived)
        {
            ans ^= derive;
        }
        if (ans == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}