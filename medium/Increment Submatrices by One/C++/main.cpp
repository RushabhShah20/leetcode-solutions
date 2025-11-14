// Problem: Increment Submatrices by One
// Link to the problem: https://leetcode.com/problems/increment-submatrices-by-one/
class Solution
{
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>> &queries)
    {
        vector<vector<int>> prefix(n + 1, vector<int>(n + 1, 0));
        for (vector<int> query : queries)
        {
            for (int i = query[0]; i <= query[2]; i++)
            {
                prefix[i][query[1]]++;
                prefix[i][query[3] + 1]--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                prefix[i][j] += prefix[i][j - 1];
            }
        }
        vector<vector<int>> ans(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ans[i][j] = prefix[i][j];
            }
        }
        return ans;
    }
};