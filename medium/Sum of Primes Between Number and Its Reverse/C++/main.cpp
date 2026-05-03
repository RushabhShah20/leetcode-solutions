// Problem: Sum of Primes Between Number and Its Reverse
// Link to the problem: https://leetcode.com/problems/sum-of-primes-between-number-and-its-reverse/
class Solution
{
public:
    int sumOfPrimesInRange(int n)
    {
        vector<bool> isPrime(1001, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i * i <= 1000; i++)
        {
            if (isPrime[i])
            {
                for (int j = i * i; j <= 1000; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }
        string s = to_string(n);
        reverse(s.begin(), s.end());
        const int m = stoi(s);
        int ans = 0;
        for (int i = min(m, n); i <= max(m, n); i++)
        {
            if (isPrime[i])
            {
                ans += i;
            }
        }
        return ans;
    }
};