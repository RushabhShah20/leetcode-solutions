// Problem: Check If a Word Occurs As a Prefix of Any Word in a Sentence
// Link to the problem: https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/
class Solution
{
public:
    vector<string> split(string str, char delimiter)
    {
        stringstream ss(str);
        vector<string> res;
        string token;
        while (getline(ss, token, delimiter))
        {
            res.push_back(token);
        }
        return res;
    }
    int isPrefixOfWord(string sentence, string searchWord)
    {
        vector<string> words = split(sentence, ' ');
        for (int i = 0; i < words.size(); i++)
        {
            if (words[i].find(searchWord) == 0)
            {
                return i + 1;
            }
        }
        return -1;
    }
};