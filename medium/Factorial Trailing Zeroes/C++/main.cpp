// Problem: Factorial Trailing Zeroes
// Link to the problem: https://leetcode.com/problems/factorial-trailing-zeroes/
class Solution
{
public:
    int trailingZeroes(int n)
    {
        int count5 = 0;
        while (n >= 5)
        {
            n /= 5;
            count5 += n;
        }
        return count5;
    }
};