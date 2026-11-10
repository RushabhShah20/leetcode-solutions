// Problem: Climbing Stairs II
// Link to the problem: https://leetcode.com/problems/climbing-stairs-ii/
int climbStairs(int n, int *costs, int costsSize)
{
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        const int d = fmin(a + 9, fmin(b + 4, c + 1)) + costs[i];
        a = b;
        b = c;
        c = d;
    }
    const int ans = c;
    return ans;
}