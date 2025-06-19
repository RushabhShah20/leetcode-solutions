// Problem: Maximum Number of Words You Can Type
// Link to the problem: https://leetcode.com/problems/maximum-number-of-words-you-can-type/
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
    int canBeTypedWords(string text, string brokenLetters)
    {
        vector<string> words = split(text, ' ');
        int ans = words.size();
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < brokenLetters.size(); j++)
            {
                if (words[i].find(brokenLetters[j]) != words[i].npos)
                {
                    ans--;
                    break;
                }
            }
        }
        return ans;
    }
};