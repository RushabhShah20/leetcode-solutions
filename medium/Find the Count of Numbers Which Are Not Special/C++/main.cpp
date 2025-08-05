// Problem: Find the Count of Numbers Which Are Not Special
// Link to the problem: https://leetcode.com/problems/find-the-count-of-numbers-which-are-not-special/
class Solution
{
public:
    int nonSpecialCount(int l, int r)
    {
        int n = sqrt(r);
        vector<bool> prime(n + 1, true);
        prime[0] = false;
        prime[1] = false;
        vector<int> primes;
        for (int i = 2; i <= n; i++)
        {
            if (prime[i] == true)
            {
                primes.push_back(i);
                for (int j = i * i; j <= n; j += i)
                {
                    prime[j] = false;
                }
            }
        }
        vector<int> ans;
        for (int i = 0; i < primes.size(); i++)
        {
            int x = primes[i] * primes[i];
            if (x >= l && x <= r)
            {
                ans.push_back(primes[i]);
            }
        }
        return (r - l + 1) - ans.size();
    }
};