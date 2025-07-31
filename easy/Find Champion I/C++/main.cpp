// Problem: Find Champion I
// Link to the problem: https://leetcode.com/problems/find-champion-i/
class Solution
{
public:
    int findChampion(vector<vector<int>> &grid)
    {
        int n = grid.size();
        vector<int> freq(n, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    freq[i]++;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < freq.size(); i++)
        {
            if (freq[i] == n - 1)
            {
                return i;
            }
        }
        return 0;
    }
};