// Problem: String Matching in an Array
// Link to the problem: https://leetcode.com/problems/string-matching-in-an-array/
class Solution
{
public:
    vector<string> stringMatching(vector<string> &words)
    {
        set<string> a;
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < words.size(); j++)
            {
                if ((words[j].find(words[i]) != words[i].npos) && (i != j))
                {
                    a.insert(words[i]);
                }
            }
        }
        vector<string> ans(a.begin(), a.end());
        return ans;
    }
};