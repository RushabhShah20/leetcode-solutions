// Problem: Count Primes
// Link to the problem: https://leetcode.com/problems/count-primes/
class Solution
{
public:
    int countPrimes(int n)
    {
        int ans = 0;
        vector<bool> prime(n + 1, true);
        prime[0] = false;
        prime[1] = false;
        for (int p = 2; p * p <= n; p++)
        {
            if (prime[p] == true)
            {
                for (int i = p * p; i <= n; i += p)
                {
                    prime[i] = false;
                }
            }
        }
        for (int p = 1; p < n; p++)
        {
            if (prime[p])
            {
                ans++;
            }
        }
        return ans;
    }
};