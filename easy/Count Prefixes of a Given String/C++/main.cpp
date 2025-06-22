// Problem: Count Prefixes of a Given String
// Link to the problem: https://leetcode.com/problems/count-prefixes-of-a-given-string/
class Solution
{
public:
    int countPrefixes(vector<string> &words, string s)
    {
        int ans = 0;
        for (int i = 0; i < words.size(); i++)
        {
            if (s.find(words[i]) == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};