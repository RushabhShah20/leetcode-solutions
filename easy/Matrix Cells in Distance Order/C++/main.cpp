// Problem: Matrix Cells in Distance Order
// Link to the problem: https://leetcode.com/problems/matrix-cells-in-distance-order/
class Solution
{
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter)
    {
        vector<vector<int>> ans;
        map<int, vector<vector<int>>> m;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                m[(abs(i - rCenter) + abs(j - cCenter))].push_back({i, j});
            }
        }
        for (auto i : m)
        {
            for (int j = 0; j < i.second.size(); j++)
            {
                ans.push_back(i.second[j]);
            }
        }
        return ans;
    }
};