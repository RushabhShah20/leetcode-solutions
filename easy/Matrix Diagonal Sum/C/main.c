// Problem: Matrix Diagonal Sum
// Link to the problem: https://leetcode.com/problems/matrix-diagonal-sum/
int diagonalSum(int **mat, int matSize, int *matColSize)
{
    const int n = matSize;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += mat[i][i];
        if (i != n - 1 - i)
        {
            ans += mat[i][n - i - 1];
        }
    }
    return ans;
}