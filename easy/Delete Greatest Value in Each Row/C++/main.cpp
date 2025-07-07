// Problem: Delete Greatest Value in Each Row
// Link to the problem: https://leetcode.com/problems/delete-greatest-value-in-each-row/
class Solution
{
public:
    int deleteGreatestValue(vector<vector<int>> &grid)
    {
        vector<int> a;
        int n = grid[0].size();
        for (int i = 0; i < n; i++)
        {
            vector<int> b;
            for (int j = 0; j < grid.size(); j++)
            {
                b.push_back(*max_element(grid[j].begin(), grid[j].end()));
                grid[j].erase(max_element(grid[j].begin(), grid[j].end()));
            }
            a.push_back(*max_element(b.begin(), b.end()));
        }
        int ans = 0;
        for (int i = 0; i < a.size(); i++)
        {
            ans += a[i];
        }
        return ans;
    }
};