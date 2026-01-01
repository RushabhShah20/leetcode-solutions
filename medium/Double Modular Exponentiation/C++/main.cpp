// Problem: Double Modular Exponentiation
// Link to the problem: https://leetcode.com/problems/double-modular-exponentiation/
class Solution
{
public:
    vector<int> getGoodIndices(vector<vector<int>> &variables, int target)
    {
        vector<int> ans;
        for (int i = 0; i < variables.size(); i++)
        {
            int x = 1, y = 1, ai = variables[i][0], bi = variables[i][1], ci = variables[i][2], mi = variables[i][3];
            for (int j = 0; j < bi; j++)
            {
                x = (x * ai) % 10;
            }
            for (int j = 0; j < ci; j++)
            {
                y = (y * x) % mi;
            }
            if (y == target)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};