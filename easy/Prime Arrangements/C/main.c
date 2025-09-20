// Problem: Prime Arrangements
// Link to the problem: https://leetcode.com/problems/prime-arrangements/
int mod = 1e9 + 7;
int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return (int)(((long long)n * (long long)fact(n - 1)) % mod);
    }
}
int numPrimeArrangements(int n)
{
    bool sieve[n + 1];
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
    int ans = (int)((((long long)fact(primes) % mod) * ((long long)fact(composites) % mod)) % mod);
    return ans;
}
