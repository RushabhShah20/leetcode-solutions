// Problem: Prime Pairs With Target Sum
// Link to the problem: https://leetcode.com/problems/prime-pairs-with-target-sum/
class Solution
{
public:
    set<int> sieve(int n)
    {
        vector<bool> prime(n + 1, true);
        prime[0] = false;
        prime[1] = false;
        for (int p = 2; p * p <= n; p++)
        {
            if (prime[p] == true)
            {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        set<int> res;
        for (int p = 1; p <= n; p++)
        {
            if (prime[p])
            {
                res.insert(p);
            }
        }
        return res;
    }
    vector<vector<int>> findPrimePairs(int n)
    {
        vector<vector<int>> ans;
        set<int> primes = sieve(n);
        for (int i = 2; i <= n / 2; i++)
        {
            if (primes.find(i) != primes.end() && primes.find(n - i) != primes.end())
            {
                ans.push_back({i, n - i});
            }
        }
        return ans;
    }
};