// Problem: Complement of Base 10 Integer
// Link to the problem: https://leetcode.com/problems/complement-of-base-10-integer/
public class Solution
{
    public int BitwiseComplement(int n)
    {
        if (n == 0)
        {
            return 1;
        }
        int x = 1;
        while (x < n)
        {
            x = (x << 1) | 1;
        }
        int ans = n ^ x;
        return ans;
    }
}