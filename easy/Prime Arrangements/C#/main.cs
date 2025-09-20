// Problem: Prime Arrangements
// Link to the problem: https://leetcode.com/problems/prime-arrangements/
public class Solution
{
    int mod = 1000000007;
    public int Fact(int n)
    {
        if (n <= 1)
        {
            return 1;
        }
        else
        {
            return (int)(((long)n * (long)Fact(n - 1)) % mod);
        }
    }
    public int NumPrimeArrangements(int n)
    {
        bool[] sieve = new bool[n + 1];
        for (int i = 0; i <= n; i++)
        {
            sieve[i] = true;
        }
        sieve[0] = false;
        sieve[1] = false;
        for (int i = 2; i * i <= n; i++)
        {
            if (sieve[i] == true)
            {
                for (int j = i * i; j <= n; j += i)
                {
                    sieve[j] = false;
                }
            }
        }
        int primes = 0, composites = 0;
        for (int i = 1; i <= n; i++)
        {
            if (sieve[i] == true)
            {
                primes++;
            }
            else
            {
                composites++;
            }
        }
        int ans = (int)((((long)Fact(primes) % mod) * ((long)Fact(composites) % mod)) % mod);
        return ans;
    }
}