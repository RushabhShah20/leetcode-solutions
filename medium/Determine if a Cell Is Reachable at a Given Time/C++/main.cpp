// Problem: Determine if a Cell Is Reachable at a Given Time
// Link to the problem: https://leetcode.com/problems/determine-if-a-cell-is-reachable-at-a-given-time/
class Solution
{
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t)
    {
        if (sx == fx && sy == fy && t == 1)
        {
            return false;
        }
        const int d = max(abs(fx - sx), abs(fy - sy));
        if (d <= t)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};