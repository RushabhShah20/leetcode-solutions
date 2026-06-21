// Problem: Create Grid With Exactly One Path
// Link to the problem: https://leetcode.com/problems/create-grid-with-exactly-one-path/
class Solution
{
public:
    vector<string> createGrid(int m, int n)
    {
        vector<string> ans(m, string(n, '#'));
        for (int i = 0; i < n; i++)
        {
            ans[0][i] = '.';
        }
        for (int i = 0; i < m; i++)
        {
            ans[i][n - 1] = '.';
        }
        return ans;
    }
};