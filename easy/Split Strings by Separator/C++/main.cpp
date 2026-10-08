// Problem: Split Strings by Separator
// Link to the problem: https://leetcode.com/problems/split-strings-by-separator/
class Solution
{
public:
    vector<string> splitWordsBySeparator(vector<string> &words, char separator)
    {
        const int n = words.size();
        vector<string> ans;
        for (int i = 0; i < n; i++)
        {
            const int m = words[i].size();
            string s;
            for (int j = 0; j < m; j++)
            {
                if (words[i][j] == separator)
                {
                    if (!s.empty())
                    {
                        ans.push_back(s);
                    }
                    s.clear();
                }
                else
                {
                    s.append(1, words[i][j]);
                }
            }
            if (!s.empty())
            {
                ans.push_back(s);
            }
        }
        return ans;
    }
};