// Problem: Rotating the Box
// Link to the problem: https://leetcode.com/problems/rotating-the-box/
class Solution
{
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>> &boxGrid)
    {
        const int m = boxGrid.size(), n = boxGrid[0].size();
        vector<vector<char>> ans(n, vector<char>(m, '.'));
        for (int i = 0; i < m; i++)
        {
            int k = n - 1;
            for (int j = n - 1; j >= 0; j--)
            {
                if (boxGrid[i][j] == '#')
                {
                    ans[k][m - i - 1] = '#';
                    k--;
                }
                else if (boxGrid[i][j] == '*')
                {
                    ans[j][m - i - 1] = '*';
                    k = j - 1;
                }
            }
        }
        return ans;
    }
};