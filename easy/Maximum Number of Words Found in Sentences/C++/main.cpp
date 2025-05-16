// Problem: Maximum Number of Words Found in Sentences
// Link to the problem: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        vector<int> ans(sentences.size(), 1);
        for (int i = 0; i < sentences.size(); i++)
        {
            for (int j = 0; j < sentences[i].size(); j++)
            {
                if (sentences[i][j] == ' ')
                {
                    ans[i]++;
                }
            }
        }
        return *max_element(ans.begin(), ans.end());
    }
};