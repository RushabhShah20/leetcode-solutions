// Problem: Integer Break
// Link to the problem: https://leetcode.com/problems/integer-break/
class Solution
{
public:
    int integerBreak(int n)
    {
        if (n <= 3)
        {
            return n - 1;
        }
        int ans = 1;
        while (n > 4)
        {
            ans *= 3;
            n -= 3;
        }
        ans *= n;
        return ans;
    }
};