// Problem: Odd String Difference
// Link to the problem: https://leetcode.com/problems/odd-string-difference/
class Solution
{
public:
    string oddString(vector<string> &words)
    {
        string ans = "";
        vector<vector<int>> diff(words.size(), vector<int>(words[0].size() - 1));
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < words[i].size() - 1; j++)
            {
                diff[i][j] = words[i][j + 1] - words[i][j];
            }
        }
        if (diff[1] == diff[2])
        {
            if (diff[0] != diff[1] && diff[0] != diff[2])
            {
                return words[0];
            }
        }
        for (int i = 1; i < diff.size() - 1; i++)
        {
            if (diff[i - 1] == diff[i + 1])
            {
                if (diff[i] != diff[i - 1] && diff[i] != diff[i + 1])
                {
                    return words[i];
                }
            }
        }
        if (diff[words.size() - 3] == diff[words.size() - 2])
        {
            if (diff[words.size() - 1] != diff[words.size() - 2] && diff[words.size() - 1] != diff[words.size() - 3])
            {
                return words[words.size() - 1];
            }
        }
        return ans;
    }
};