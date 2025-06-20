// Problem: Check if Word Equals Summation of Two Words
// Link to the problem: https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/
class Solution
{
public:
    int sum(string s)
    {
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            ans += ((s[i] - 'a') + '0');
        }
        return atoi(ans.c_str());
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord)
    {
        return sum(firstWord) + sum(secondWord) == sum(targetWord);
    }
};