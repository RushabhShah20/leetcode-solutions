// Problem: Water and Jug Problem
// Link to the problem: https://leetcode.com/problems/water-and-jug-problem/
class Solution
{
public:
    int gcd(int a, int b)
    {
        return b == 0 ? a : gcd(b, a % b);
    }
    bool canMeasureWater(int x, int y, int target)
    {
        if (x + y < target)
        {
            return false;
        }
        const bool ans = target % gcd(x, y) == 0;
        return ans;
    }
};