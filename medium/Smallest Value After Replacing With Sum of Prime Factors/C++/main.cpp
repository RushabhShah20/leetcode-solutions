// Problem: Smallest Value After Replacing With Sum of Prime Factors
// Link to the problem: https://leetcode.com/problems/smallest-value-after-replacing-with-sum-of-prime-factors/
class Solution
{
public:
    vector<int> sieve(int n)
    {
        vector<int> prime(n + 1, 1);
        prime[0] = 0;
        for (int i = 2; i <= n; i++)
        {
            if (prime[i] == 1)
            {
                for (int j = i; j <= n; j += i)
                {
                    if (prime[j] == 1)
                    {
                        prime[j] = i;
                    }
                }
            }
        }
        return prime;
    }
    vector<int> primeFactors(int n)
    {
        vector<int> primes = sieve(n);
        vector<int> factors;
        while (n != 1)
        {
            factors.push_back(primes[n]);
            n /= primes[n];
        }
        return factors;
    }
    int smallestValue(int n)
    {
        int x = n;
        vector<int> factors = primeFactors(n);
        while (factors.size() > 1)
        {
            int sum = 0;
            for (int i = 0; i < factors.size(); i++)
            {
                sum += factors[i];
            }
            if (sum == n)
            {
                break;
            }
            n = sum;
            factors = primeFactors(n);
        }
        return n;
    }
};