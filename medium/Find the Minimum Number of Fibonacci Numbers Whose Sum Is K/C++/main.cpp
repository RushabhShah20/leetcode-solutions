// Problem: Find the Minimum Number of Fibonacci Numbers Whose Sum Is K
// Link to the problem: https://leetcode.com/problems/find-the-minimum-number-of-fibonacci-numbers-whose-sum-is-k/
class Solution
{
public:
    int findMinFibonacciNumbers(int k)
    {
        vector<int> fib;
        fib.push_back(1);
        fib.push_back(1);
        while (fib.back() <= k)
        {
            fib.push_back(fib[fib.size() - 1] + fib[fib.size() - 2]);
        }
        reverse(fib.begin(), fib.end());
        int ans = 0;
        while (k != 0)
        {
            for (int i = 0; i < fib.size(); i++)
            {
                if (fib[i] <= k)
                {
                    k -= fib[i];
                    break;
                }
            }
            ans++;
        }
        return ans;
    }
};