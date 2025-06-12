// Problem: Merge Strings Alternately
// Link to the problem: https://leetcode.com/problems/merge-strings-alternately/
class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string ans = "";
        int min_length = min(word1.size(), word2.size());
        for (int i = 0; i < min_length; i++)
        {
            ans.push_back(word1[i]);
            ans.push_back(word2[i]);
        }
        if (word1.size() == min_length)
        {
            ans = ans + word2.substr(min_length, word2.size() - min_length);
        }
        else
        {
            ans = ans + word1.substr(min_length, word1.size() - min_length);
        }
        return ans;
    }
};