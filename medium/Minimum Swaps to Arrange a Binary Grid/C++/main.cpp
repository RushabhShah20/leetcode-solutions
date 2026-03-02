// Problem: Minimum Swaps to Arrange a Binary Grid
// Link to the problem: https://leetcode.com/problems/minimum-swaps-to-arrange-a-binary-grid/
class Solution
{
public:
    int minSwaps(vector<vector<int>> &grid)
    {
        const int n = grid.size();
        int ans = 0;
        vector<int> a(n, -1);
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if (grid[i][j] == 1)
                {
                    a[i] = j;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            int k = -1;
            for (int j = i; j < n; j++)
            {
                if (a[j] <= i)
                {
                    ans += (j - i);
                    k = j;
                    break;
                }
            }
            if (k != -1)
            {
                for (int j = k; j > i; j--)
                {
                    swap(a[j], a[j - 1]);
                }
            }
            else
            {
                return -1;
            }
        }
        return ans;
    }
};