// Problem: Find the Degree of Each Vertex
// Link to the problem: https://leetcode.com/problems/find-the-degree-of-each-vertex/
class Solution
{
public:
    vector<int> findDegrees(vector<vector<int>> &matrix)
    {
        const int n = matrix.size();
        vector<int> ans(n, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ans[i] += matrix[i][j];
            }
        }
        return ans;
    }
};