// Problem: Pow(x, n)
// Link to the problem: https://leetcode.com/problems/powx-n/
public class Solution
{
    public double MyPow(double x, int n)
    {
        long t = n;
        if (n == 0)
        {
            return 1;
        }
        if (t < 0)
        {
            t = -1 * t;
            x = 1 / x;
        }
        if (n % 2 == 0)
        {
            return MyPow(x * x, (int)(t / 2));
        }
        else
        {
            return x * MyPow(x, (int)(t - 1));
        }
    }
}