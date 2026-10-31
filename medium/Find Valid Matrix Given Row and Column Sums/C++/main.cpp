// Problem: Find Valid Matrix Given Row and Column Sums
// Link to the problem: https://leetcode.com/problems/find-valid-matrix-given-row-and-column-sums/F
class Solution
{
public:
    vector<vector<int>> restoreMatrix(vector<int> &rowSum, vector<int> &colSum)
    {
        const int n = rowSum.size(), m = colSum.size();
        vector<vector<int>> ans(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                const int x = min(rowSum[i], colSum[j]);
                ans[i][j] = x;
                rowSum[i] -= x;
                colSum[j] -= x;
            }
        }
        return ans;
    }
};