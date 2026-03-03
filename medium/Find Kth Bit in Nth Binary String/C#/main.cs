// Problem: Find Kth Bit in Nth Binary String
// Link to the problem: https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/
public class Solution
{
    public char FindKthBit(int n, int k)
    {
        if (n == 1)
        {
            return '0';
        }
        int x = (1 << n) - 1, m = x / 2 + 1;
        if (k == m)
        {
            return '1';
        }
        if (k < m)
        {
            return FindKthBit(n - 1, k);
        }
        if (FindKthBit(n - 1, x - k + 1) == '0')
        {
            return '1';
        }
        return '0';
    }
}