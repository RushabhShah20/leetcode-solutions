// Problem: Three Fibonacci Sum
// Link to the problem: https://leetcode.com/problems/three-fibonacci-sum/
class Solution
{
public:
    bool threeFibonacciSum(int n)
    {
        int a = 0, b = 1, c = 1;
        while (a + b + c < n)
        {
            const int d = b + c;
            a = b;
            b = c;
            c = d;
        }
        const bool ans = a + b + c == n;
        return ans;
    }
};