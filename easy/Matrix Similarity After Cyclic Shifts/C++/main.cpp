// Problem: Matrix Similarity After Cyclic Shifts
// Link to the problem: https://leetcode.com/problems/matrix-similarity-after-cyclic-shifts/
class Solution
{
public:
    bool areSimilar(vector<vector<int>> &mat, int k)
    {
        const int m = mat.size(), n = mat[0].size();
        for (const vector<int> &rows : mat)
        {
            for (int i = 0; i < n; i++)
            {
                if (rows[i] != rows[(i + k) % n])
                {
                    return false;
                }
            }
        }
        return true;
    }
};