// Problem: Unique Paths
// Link to the problem: https://leetcode.com/problems/unique-paths/
int uniquePaths(int m, int n)
{
    unsigned long long ans = 1;
    int down_moves = m - 1, right_moves = n - 1;
    int x = fmax(down_moves, right_moves), y = fmin(down_moves, right_moves);
    for (int i = 1; i <= y; i++)
    {
        ans *= (x + i);
        ans /= i;
    }
    return ans;
}