// Problem: Divisible and Non-divisible Sums Difference
// Link to the problem: https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/
class Solution
{
public:
    int differenceOfSums(int n, int m)
    {
        int suma = 0, sumb = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % m == 0)
            {
                sumb += i;
            }
            else
            {
                suma += i;
            }
        }
        return suma - sumb;
    }
};