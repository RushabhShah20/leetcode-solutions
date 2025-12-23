// Problem: Maximum Score From Removing Stones
// Link to the problem: https://leetcode.com/problems/maximum-score-from-removing-stones/
class Solution
{
public:
    int maximumScore(int a, int b, int c)
    {
        const int d = a + b + c;
        const int e = max(a, max(b, c));
        const int ans = min(d / 2, d - e);
        return ans;
    }
};