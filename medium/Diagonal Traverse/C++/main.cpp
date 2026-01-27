// Problem: Diagonal Traverse
// Link to the problem: https://leetcode.com/problems/diagonal-traverse/
class Solution
{
public:
    vector<int> findDiagonalOrder(vector<vector<int>> &mat)
    {
        const int m = mat.size(), n = mat[0].size();
        vector<int> ans;
        bool z = true;
        int i = 0, j = 0;
        while (i < m && j < n)
        {
            ans.push_back(mat[i][j]);
            if (z)
            {
                if (i - 1 >= 0 && j + 1 < n)
                {
                    i--;
                    j++;
                }
                else
                {
                    z = !z;
                    if (j + 1 >= n)
                    {
                        i++;
                    }
                    else
                    {
                        j++;
                    }
                }
            }
            else
            {
                if (j - 1 >= 0 && i + 1 < m)
                {
                    i++;
                    j--;
                }
                else
                {
                    z = !z;
                    if (i + 1 >= m)
                    {
                        j++;
                    }
                    else
                    {
                        i++;
                    }
                }
            }
        }
        return ans;
    }
};