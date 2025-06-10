// Problem: Kth Smallest Element in a Sorted Matrix
// Link to the problem: https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/
class Solution
{
public:
    int kthSmallest(vector<vector<int>> &matrix, int k)
    {
        vector<int> ans;
        for (size_t i = 0; i < matrix.size(); i++)
        {
            for (size_t j = 0; j < matrix[0].size(); j++)
            {
                ans.push_back(matrix[i][j]);
            }
        }
        sort(ans.begin(), ans.end());
        return ans[k - 1];
    }
};