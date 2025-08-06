// Problem: First Completely Painted Row or Column
// Link to the problem: https://leetcode.com/problems/first-completely-painted-row-or-column/
class Solution
{
public:
    int firstCompleteIndex(vector<int> &arr, vector<vector<int>> &mat)
    {
        int m = mat.size(), n = mat[0].size(), ans = 0;
        vector<int> rows(m, 0), cols(n, 0);
        map<int, vector<int>> x;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                x[mat[i][j]] = {i, j};
            }
        }
        for (int i = 0; i < arr.size(); i++)
        {
            auto it = x.find(arr[i]);
            vector<int> y = it->second;
            rows[y[0]]++;
            cols[y[1]]++;
            if (rows[y[0]] == n || cols[y[1]] == m)
            {
                return i;
            }
        }
        return ans;
    }
};