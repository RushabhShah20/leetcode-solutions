// Problem: Minimum Operations to Write the Letter Y on a Grid
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-write-the-letter-y-on-a-grid/
class Solution
{
public:
    int minimumOperationsToWriteY(vector<vector<int>> &grid)
    {
        const int n = grid.size();
        int countX0 = 0, countX1 = 0, countX2 = 0, countY0 = 0, countY1 = 0, countY2 = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i <= (n / 2))
                {
                    if (i == j || i + j == n - 1)
                    {
                        if (grid[i][j] == 1)
                        {
                            countY1++;
                        }
                        else if (grid[i][j] == 2)
                        {
                            countY2++;
                        }
                        else
                        {
                            countY0++;
                        }
                    }
                    else
                    {
                        if (grid[i][j] == 1)
                        {
                            countX1++;
                        }
                        else if (grid[i][j] == 2)
                        {
                            countX2++;
                        }
                        else
                        {
                            countX0++;
                        }
                    }
                }
                else
                {
                    if (j == (n / 2))
                    {
                        if (grid[i][j] == 1)
                        {
                            countY1++;
                        }
                        else if (grid[i][j] == 2)
                        {
                            countY2++;
                        }
                        else
                        {
                            countY0++;
                        }
                    }
                    else
                    {
                        if (grid[i][j] == 1)
                        {
                            countX1++;
                        }
                        else if (grid[i][j] == 2)
                        {
                            countX2++;
                        }
                        else
                        {
                            countX0++;
                        }
                    }
                }
            }
        }
        const int maxX = max({countX0, countX1, countX2}), maxY = max({countY0, countY1, countY2});
        const int sumX = countX0 + countX1 + countX2, sumY = countY0 + countY1 + countY2;
        const int ans1 = sumX - countX1 + sumY - countY0;
        const int ans2 = sumX - countX1 + sumY - countY2;
        const int ans3 = sumX - countX2 + sumY - countY0;
        const int ans4 = sumX - countX2 + sumY - countY1;
        const int ans5 = sumX - countX0 + sumY - countY1;
        const int ans6 = sumX - countX0 + sumY - countY2;
        const int ans = min({ans1, ans2, ans3, ans4, ans5, ans6});
        return ans;
    }
};