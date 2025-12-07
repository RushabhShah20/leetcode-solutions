// Problem: Largest Prime from Consecutive Prime Sum
// Link to the problem: https://leetcode.com/problems/largest-prime-from-consecutive-prime-sum/
class Solution
{
public:
    int largestPrime(int n)
    {
        vector<bool> sieve(n + 1, true);
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
        vector<int> primes;
        for (int i = 2; i <= n; i++)
        {
            if (sieve[i])
            {
                primes.push_back(i);
            }
        }
        int ans = 0, sum = 0;
        for (int prime : primes)
        {
            sum += prime;
            if (sum > n)
            {
                break;
            }
            else
            {
                if (sieve[sum])
                {
                    ans = sum;
                }
            }
        }
        return ans;
    }
};