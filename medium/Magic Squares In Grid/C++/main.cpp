// Problem: Magic Squares In Grid
// Link to the problem: https://leetcode.com/problems/magic-squares-in-grid/
class Solution
{
public:
    bool isMagicSquare(vector<vector<int>> &mat)
    {
        int row1sum = mat[0][0] + mat[0][1] + mat[0][2];
        int row2sum = mat[1][0] + mat[1][1] + mat[1][2];
        int row3sum = mat[2][0] + mat[2][1] + mat[2][2];
        int col1sum = mat[0][0] + mat[1][0] + mat[2][0];
        int col2sum = mat[0][1] + mat[1][1] + mat[2][1];
        int col3sum = mat[0][2] + mat[1][2] + mat[2][2];
        int diag1sum = mat[0][0] + mat[1][1] + mat[2][2];
        int diag2sum = mat[2][0] + mat[1][1] + mat[0][2];
        vector<int> elements = {mat[0][0], mat[0][1], mat[0][2], mat[1][0], mat[1][1], mat[1][2], mat[2][0], mat[2][1], mat[2][2]};
        set<int> s(elements.begin(), elements.end());
        if (s.size() != elements.size())
        {
            return false;
        }
        else if (s.find(10) != s.end() || s.find(11) != s.end() || s.find(12) != s.end() || s.find(13) != s.end() || s.find(14) != s.end() || s.find(15) != s.end() | s.find(0) != s.end())
        {
            return false;
        }
        else if (s.find(1) == s.end() || s.find(2) == s.end() || s.find(3) == s.end() || s.find(4) == s.end() || s.find(5) == s.end() || s.find(6) == s.end() || s.find(7) == s.end() || s.find(8) == s.end() || s.find(9) == s.end())
        {
            return false;
        }
        else if (row2sum == row1sum && row3sum == row1sum && col1sum == row1sum && col2sum == row1sum && col3sum == row1sum && diag1sum == row1sum && diag2sum == row1sum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int numMagicSquaresInside(vector<vector<int>> &grid)
    {
        int ans = 0, m = grid.size(), n = grid[0].size();
        for (int i = 1; i < m - 1; i++)
        {
            for (int j = 1; j < n - 1; j++)
            {
                vector<vector<int>> mat = {{grid[i - 1][j - 1], grid[i - 1][j], grid[i - 1][j + 1]}, {grid[i][j - 1], grid[i][j], grid[i][j + 1]}, {grid[i + 1][j - 1], grid[i + 1][j], grid[i + 1][j + 1]}};
                if (isMagicSquare(mat))
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};