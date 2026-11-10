// Problem: Climbing Stairs II
// Link to the problem: https://leetcode.com/problems/climbing-stairs-ii/
class Solution
{
public:
    int climbStairs(int n, vector<int> &costs)
    {
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            const int d = min(a + 9, min(b + 4, c + 1)) + costs[i];
            a = b;
            b = c;
            c = d;
        }
        const int ans = c;
        return ans;
    }
};