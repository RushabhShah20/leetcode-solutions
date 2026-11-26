// Problem: Valid Word Square
// Link to the problem: https://leetcode.com/problems/valid-word-square/
class Solution
{
public:
    bool validWordSquare(vector<string> &words)
    {
        const int n = words.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < words[i].size(); j++)
            {
                if (j >= n || i >= words[j].size() || words[i][j] != words[j][i])
                {
                    return false;
                }
            }
        }
        return true;
    }
};