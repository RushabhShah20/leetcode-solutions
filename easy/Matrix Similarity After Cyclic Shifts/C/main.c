// Problem: Matrix Similarity After Cyclic Shifts
// Link to the problem: https://leetcode.com/problems/matrix-similarity-after-cyclic-shifts/
bool areSimilar(int **mat, int matSize, int *matColSize, int k)
{
    const int m = matSize, n = matColSize[0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] != mat[i][(j + k) % n])
            {
                return false;
            }
        }
    }
    return true;
}