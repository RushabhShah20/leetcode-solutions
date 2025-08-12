// Problem: Closest Prime Numbers in Range
// Link to the problem: https://leetcode.com/problems/closest-prime-numbers-in-range/
class Solution
{
public:
    vector<int> sieve(int start, int end)
    {
        vector<bool> prime(end + 1, true);
        prime[0] = false;
        prime[1] = false;
        for (int p = 2; p * p <= end; p++)
        {
            if (prime[p] == true)
            {
                for (int i = p * p; i <= end; i += p)
                    prime[i] = false;
            }
        }
        vector<int> res;
        for (int p = start; p <= end; p++)
        {
            if (prime[p])
            {
                res.push_back(p);
            }
        }
        return res;
    }
    vector<int> closestPrimes(int left, int right)
    {
        vector<int> primes = sieve(left, right);
        if (primes.size() <= 1)
        {
            return {-1, -1};
        }
        else
        {
            vector<int> ans;
            map<int, vector<vector<int>>> x;
            for (int i = 0; i < primes.size() - 1; i++)
            {
                x[primes[i + 1] - primes[i]].push_back({primes[i], primes[i + 1]});
            }
            int minDiff = INT_MAX;
            for (auto i : x)
            {
                minDiff = min(minDiff, i.first);
            }
            vector<vector<int>> y = x[minDiff];
            ans = y[0];
            return ans;
        }
    }
};