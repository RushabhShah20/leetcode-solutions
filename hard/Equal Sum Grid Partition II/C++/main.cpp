// Problem: Equal Sum Grid Partition II
// Link to the problem: https://leetcode.com/problems/equal-sum-grid-partition-ii/
class Solution
{
public:
    bool check(vector<vector<int>> &grid)
    {
        const int m = grid.size(), n = grid[0].size();
        long long x = 0;
        for (const vector<int> &row : grid)
        {
            for (const int val : row)
            {
                x += val;
            }
        }
        long long y = 0;
        unordered_map<long long, long long> p, q;
        for (const vector<int> &row : grid)
        {
            for (const int val : row)
            {
                q[val]++;
            }
        }
        for (int i = 0; i < m - 1; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                const long long v = grid[i][j];
                y += v;
                p[v]++;
                if (--q[v] == 0)
                {
                    q.erase(v);
                }
            }
            const long long z = x - y;
            const long long d = abs(y - z);
            if (d == 0)
            {
                return true;
            }
            if (y > z)
            {
                if (i + 1 > 1 && n > 1)
                {
                    if (p.count(d))
                    {
                        return true;
                    }
                }
                else
                {
                    if (grid[0][0] == d || grid[i][n - 1] == d || grid[0][n - 1] == d || grid[i][0] == d)
                    {
                        return true;
                    }
                }
            }
            else
            {
                const int b = m - (i + 1);
                if (b > 1 && n > 1)
                {
                    if (q.count(d))
                    {
                        return true;
                    }
                }
                else
                {
                    if (grid[i + 1][0] == d || grid[m - 1][n - 1] == d || grid[i + 1][n - 1] == d || grid[m - 1][0] == d)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    bool canPartitionGrid(vector<vector<int>> &grid)
    {
        if (check(grid))
        {
            return true;
        }
        const int m = grid.size(), n = grid[0].size();
        vector<vector<int>> transpose(n, vector<int>(m));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                transpose[j][i] = grid[i][j];
            }
        }
        return check(transpose);
    }
};