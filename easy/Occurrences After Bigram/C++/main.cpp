// Problem: Occurrences After Bigram
// Link to the problem: https://leetcode.com/problems/occurrences-after-bigram/
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
    vector<string> findOcurrences(string text, string first, string second)
    {
        vector<string> words = split(text, ' ');
        vector<string> ans;
        for (int i = 0; i < words.size() - 2; i++)
        {
            if (words[i] == first)
            {
                if (words[i + 1] == second)
                {
                    ans.push_back(words[i + 2]);
                }
            }
        }
        return ans;
    }
};