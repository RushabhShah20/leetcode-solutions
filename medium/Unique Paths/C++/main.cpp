// Problem: Unique Paths
// Link to the problem: https://leetcode.com/problems/unique-paths/
class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        unsigned long long ans = 1;
        int down_moves = m - 1, right_moves = n - 1;
        int x = max(down_moves, right_moves), y = min(down_moves, right_moves);
        for (int i = 1; i <= y; i++)
        {
            ans *= (x + i);
            ans /= i;
        }
        return ans;
    }
};