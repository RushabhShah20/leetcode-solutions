// Problem: Three Divisors
// Link to the problem: https://leetcode.com/problems/three-divisors/
public class Solution
{
    public bool IsThree(int n)
    {
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 3)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}