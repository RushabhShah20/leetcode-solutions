// Problem: Maximum Split of Positive Even Integers
// Link to the problem: https://leetcode.com/problems/maximum-split-of-positive-even-integers/
class Solution
{
public:
    int minSensors(int n, int m, int k)
    {
        const int ans = ((m % ((2 * k) + 1)) == 0 ? (m / ((2 * k) + 1)) : ((m / ((2 * k) + 1)) + 1)) * ((n % ((2 * k) + 1)) == 0 ? (n / ((2 * k) + 1)) : ((n / ((2 * k) + 1)) + 1));
        return ans;
    }
};