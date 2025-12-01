// Problem: Range Addition II
// Link to the problem: https://leetcode.com/problems/range-addition-ii/
int maxCount(int m, int n, int **ops, int opsSize, int *opsColSize)
{
    for (int i = 0; i < opsSize; i++)
    {
        m = fmin(m, ops[i][0]);
        n = fmin(n, ops[i][1]);
    }
    const int ans = m * n;
    return ans;
}