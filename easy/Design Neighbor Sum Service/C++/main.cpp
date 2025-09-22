// Problem: Design Neighbor Sum Service
// Link to the problem: https://leetcode.com/problems/design-neighbor-sum-service/
class NeighborSum
{
public:
    map<int, pair<int, int>> x;
    map<pair<int, int>, int> y;

    NeighborSum(vector<vector<int>> &grid)
    {
        int n = grid.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                x[grid[i][j]] = {i, j};
                y[{i, j}] = grid[i][j];
            }
        }
    }

    int adjacentSum(int value)
    {
        int ans = 0;
        int i = x[value].first, j = x[value].second;
        int a = y[{i - 1, j}], b = y[{i + 1, j}], c = y[{i, j - 1}], d = y[{i, j + 1}];
        ans = a + b + c + d;
        return ans;
    }

    int diagonalSum(int value)
    {
        int ans = 0;
        int i = x[value].first, j = x[value].second;
        int a = y[{i - 1, j - 1}], b = y[{i - 1, j + 1}], c = y[{i + 1, j - 1}], d = y[{i + 1, j + 1}];
        ans = a + b + c + d;
        return ans;
    }
};

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum* obj = new NeighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */