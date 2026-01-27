// Problem: Sort the Matrix Diagonally
// Link to the problem: https://leetcode.com/problems/sort-the-matrix-diagonally/
class Solution
{
public:
    vector<vector<int>> diagonalSort(vector<vector<int>> &mat)
    {
        const int m = mat.size(), n = mat[0].size();
        unordered_map<int, priority_queue<int, vector<int>, greater<int>>> pq;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                pq[i - j].push(mat[i][j]);
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mat[i][j] = pq[i - j].top();
                pq[i - j].pop();
            }
        }
        return mat;
    }
};