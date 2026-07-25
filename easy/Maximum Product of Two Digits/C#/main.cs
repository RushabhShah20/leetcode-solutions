// Problem: Maximum Produdct of Two Digits
// Link to the problem: https://leetcode.com/problems/maximum-product-of-two-digits/
public class Solution
{
    public int MaxProduct(int n)
    {
        int x = 0, y = 0;
        while (n > 0)
        {
            int k = n % 10;
            if (k > x)
            {
                y = x;
                x = k;
            }
            else if (k > y)
            {
                y = k;
            }
            n /= 10;
        }
        int ans = x * y;
        return ans;
    }
}