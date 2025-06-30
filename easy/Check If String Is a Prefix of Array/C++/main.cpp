// Problem: Check If String Is a Prefix of Array
// Link to the problem: https://leetcode.com/problems/check-if-string-is-a-prefix-of-array/
class Solution
{
public:
    bool isPrefixString(string s, vector<string> &words)
    {
        string ans = "";
        for (int i = 0; i < words.size(); i++)
        {
            ans += words[i];
            if (ans.find(s) == 0)
            {
                if (ans.size() == s.size())
                {
                    return true;
                }
            }
        }
        return false;
    }
};