// Problem: Check Divisibility by Digit Sum and Product
// Link to the problem: https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/
public class Solution
{
    public bool CheckDivisibility(int n)
    {
        int x = 0, y = 1, m = n;
        while (m > 0)
        {
            int z = m % 10;
            x += z;
            y *= z;
            m /= 10;
        }
        bool ans = n % (x + y) == 0;
        return ans;
    }
}