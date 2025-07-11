// Problem: Row With Maximum Ones
// Link to the problem: https://leetcode.com/problems/row-with-maximum-ones/
class Solution
{
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
    {
        map<int, int> x;
        for (int i = 0; i < mat.size(); i++)
        {
            x[i] = 0;
            for (int j = 0; j < mat[0].size(); j++)
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
        int maxFreq = 0;
        for (auto i : y)
        {
            maxFreq = max(maxFreq, i.first);
        }
        vector<int> z = y[maxFreq];
        return {*min_element(z.begin(), z.end()), maxFreq};
    }
};