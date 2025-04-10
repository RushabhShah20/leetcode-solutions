// Problem: Find Words Containing Character
// Link to the problem: https://leetcode.com/problems/find-words-containing-character/
class Solution
{
public:
    vector<int> findWordsContaining(vector<string> &words, char x)
    {
        vector<int> ans;
        for (int i = 0; i < words.size(); i++)
        {
            if (words[i].find(x) != words[i].npos)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};