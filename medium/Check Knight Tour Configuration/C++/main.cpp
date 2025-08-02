// Problem: Check Knight Tour Configuration
// Link to the problem: https://leetcode.com/problems/check-knight-tour-configuration/
class Solution
{
public:
    bool checkValidGrid(vector<vector<int>> &grid)
    {
        int n = grid.size();
        map<int, vector<int>> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                m[grid[i][j]] = {i, j};
            }
        }
        vector<int> a = m[0];
        if (a[0] != 0 || a[1] != 0)
        {
            return false;
        }
        for (int i = 0; i < m.size() - 1; i++)
        {
            vector<int> x = m[i];
            vector<int> y = m[i + 1];
            int a = abs(x[0] - y[0]), b = abs(x[1] - y[1]);
            if ((a == 2 && b == 1) || (a == 1 && b == 2))
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};