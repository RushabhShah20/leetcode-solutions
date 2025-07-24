// Problem: Uncommon Words from Two Sentences
// Link to the problem: https://leetcode.com/problems/uncommon-words-from-two-sentences/
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
    vector<string> uncommonFromSentences(string s1, string s2)
    {
        vector<string> ans;
        map<string, int> m;
        vector<string> words1 = split(s1, ' '), words2 = split(s2, ' ');
        for (int i = 0; i < words1.size(); i++)
        {
            for (int j = 0; j < words2.size(); j++)
            {
                if (words1[i] != words2[j])
                {
                    m[words1[i]]++;
                    break;
                }
            }
        }
        for (int i = 0; i < words2.size(); i++)
        {
            for (int j = 0; j < words1.size(); j++)
            {
                if (words2[i] != words1[j])
                {
                    m[words2[i]]++;
                    break;
                }
            }
        }
        for (auto i : m)
        {
            if (i.second == 1)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};