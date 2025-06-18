// Problem: Reverse Prefix of Word
// Link to the problem: https://leetcode.com/problems/reverse-prefix-of-word/
class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        if (word.find(ch) == word.npos)
        {
            return word;
        }
        else
        {
            string ans = "";
            string prefix = word.substr(0, word.find(ch) + 1);
            string suffix = word.substr(word.find(ch) + 1, word.size() - word.find(ch) - 1);
            reverse(prefix.begin(), prefix.end());
            ans += prefix;
            ans += suffix;
            return ans;
        }
    }
};