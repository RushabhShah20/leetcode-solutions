// Problem: Words Within Two Edits of Dictionary
// Link to the problem: https://leetcode.com/problems/words-within-two-edits-of-dictionary/
class Solution
{
public:
    vector<string> twoEditWords(vector<string> &queries, vector<string> &dictionary)
    {
        vector<string> ans;
        for (const string &query : queries)
        {
            for (const string &word : dictionary)
            {
                int x = 0;
                for (int i = 0; i < query.size(); i++)
                {
                    if (query[i] != word[i])
                    {
                        x++;
                    }
                }
                if (x <= 2)
                {
                    ans.push_back(query);
                    break;
                }
            }
        }
        return ans;
    }
};