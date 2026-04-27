// Problem: Check if There is a Valid Path in a Grid
// Link to the problem: https://leetcode.com/problems/check-if-there-is-a-valid-path-in-a-grid/
class DisjointSet
{
public:
    vector<int> parent;
    DisjointSet(const int n)
    {
        parent.resize(n);
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
        }
    }
    int find(const int x)
    {
        if (x == parent[x])
        {
            return x;
        }
        return parent[x] = find(parent[x]);
    }
    void merge(const int x, const int y)
    {
        parent[find(x)] = find(y);
    }
};
class Solution
{
public:
    bool hasValidPath(vector<vector<int>> &grid)
    {
        const int n = grid.size(), m = grid[0].size();
        const vector<int> a = {0, 0b1010, 0b0101, 0b1100, 0b0110, 0b1001, 0b0011};
        const vector<pair<int, int>> dirs = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
        DisjointSet ds(n * m);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                const int b = a[grid[i][j]];
                for (int k = 0; k < 4; k++)
                {
                    if (b & 1 << k)
                    {
                        const int x = i + dirs[k].first, y = j + dirs[k].second;
                        if (x >= 0 && x < n && y >= 0 && y < m)
                        {
                            const int d = a[grid[x][y]];
                            if (d & 1 << (k + 2) % 4)
                            {
                                ds.merge(i * m + j, x * m + y);
                            }
                        }
                    }
                }
            }
        }
        const bool ans = ds.find(0) == ds.find(m * n - 1);
        return ans;
    }
};
