// Problem: Check if Point Is Reachable
// Link to the problem: https://leetcode.com/problems/check-if-point-is-reachable/
class Solution
{
public:
    bool isReachable(int targetX, int targetY)
    {
        int a = gcd(targetX, targetY);
        while (a % 2 == 0)
        {
            a /= 2;
        }
        const bool ans = a == 1;
        return ans;
    }
};