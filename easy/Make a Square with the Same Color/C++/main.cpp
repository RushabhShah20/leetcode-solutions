// Problem: Make a Square with the Same Color
// Link to the problem: https://leetcode.com/problems/make-a-square-with-the-same-color/
class Solution
{
public:
    bool canMakeSquare(vector<vector<char>> &grid)
    {
        vector<int> ans;
        int m = grid.size(), n = grid[0].size();
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                int count = 0;
                if (grid[i - 1][j - 1] == 'B')
                {
                    count++;
                }
                if (grid[i][j - 1] == 'B')
                {
                    count++;
                }
                if (grid[i][j] == 'B')
                {
                    count++;
                }
                if (grid[i - 1][j] == 'B')
                {
                    count++;
                }
                ans.push_back(count);
            }
        }
        if (find(ans.begin(), ans.end(), 0) != ans.end() || find(ans.begin(), ans.end(), 1) != ans.end() || find(ans.begin(), ans.end(), 3) != ans.end() || find(ans.begin(), ans.end(), 4) != ans.end())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};