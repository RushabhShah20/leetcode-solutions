// Problem: Cells with Odd Values in a Matrix
// Link to the problem: https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/
class Solution
{
public:
    int oddCells(int m, int n, vector<vector<int>> &indices)
    {
        vector<vector<int>> a(m, vector<int>(n, 0));
        for (int x = 0; x < indices.size(); x++)
        {
            for (int i = 0; i < a.size(); i++)
            {
                a[i][indices[x][1]]++;
            }
            for (int j = 0; j < a[0].size(); j++)
            {
                a[indices[x][0]][j]++;
            }
        }
        int ans = 0;
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = 0; j < a[0].size(); j++)
            {
                if (a[i][j] % 2 != 0)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};