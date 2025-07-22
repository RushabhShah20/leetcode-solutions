// Problem: The K Weakest Rows in a Matrix
// Link to the problem: https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/
class Solution
{
public:
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        map<int, int> x;
        for (int i = 0; i < mat.size(); i++)
        {
            x[i] = 0;
            for (int j = 0; j < mat[i].size(); j++)
            {
                if (mat[i][j] == 1)
                {
                    x[i]++;
                }
            }
        }
        map<int, vector<int>> y;
        for (auto i : x)
        {
            y[i.second].push_back(i.first);
        }
        vector<int> z;
        for (auto i : y)
        {
            for (int j = 0; j < i.second.size(); j++)
            {
                z.push_back(i.second[j]);
            }
        }
        vector<int> ans;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(z[i]);
        }
        return ans;
    }
};