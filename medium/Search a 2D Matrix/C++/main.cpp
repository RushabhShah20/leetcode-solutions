// Problem: Search a 2D Matrix
// Link to the problem: https://leetcode.com/problems/search-a-2d-matrix/
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        vector<int> ans;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                ans.push_back(matrix[i][j]);
            }
        }
        return find(ans.begin(), ans.end(), target) == ans.end() ? false : true;
    }
};