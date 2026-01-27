// Problem: Sort Matrix by Diagonals
// Link to the problem: https://leetcode.com/problems/sort-matrix-by-diagonals/
class Solution
{
public:
    vector<vector<int>> sortMatrix(vector<vector<int>> &grid)
    {
        const int n = grid.size();
        unordered_map<int, priority_queue<int>> max_heap;
        unordered_map<int, priority_queue<int, vector<int>, greater<int>>> min_heap;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i - j >= 0)
                {
                    max_heap[i - j].push(grid[i][j]);
                }
                else
                {
                    min_heap[i - j].push(grid[i][j]);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i - j >= 0)
                {
                    grid[i][j] = max_heap[i - j].top();
                    max_heap[i - j].pop();
                }
                else
                {
                    grid[i][j] = min_heap[i - j].top();
                    min_heap[i - j].pop();
                }
            }
        }
        return grid;
    }
};