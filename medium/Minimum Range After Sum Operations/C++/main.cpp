// Problem: Minimum Range After Sum Operations
// Link to the problem: https://leetcode.com/problems/minimum-range-after-sum-operations/
class Solution
{
public:
    int minRange(int a, int b, int c)
    {
        const int x = min(a, min(b, c)), y = max(a, max(b, c)), z = a + b + c;
        const int ans = y << 1 > z ? z - x - y : y - x;
        return ans;
    }
};
