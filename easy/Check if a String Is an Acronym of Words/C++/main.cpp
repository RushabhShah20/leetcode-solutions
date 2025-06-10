// Problem: Check if a String Is an Acronym of Words
// Link to the problem: https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/
class Solution
{
public:
    bool isAcronym(vector<string> &words, string s)
    {
        string ans = "";
        for (int i = 0; i < words.size(); i++)
        {
            ans.push_back(words[i][0]);
        }
        return ans == s;
    }
};