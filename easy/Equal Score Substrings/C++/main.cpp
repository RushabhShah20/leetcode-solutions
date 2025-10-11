// Problem: Equal Score Substrings
// Link to the problem: https://leetcode.com/problems/equal-score-substrings/
class Solution
{
public:
    bool scoreBalance(string s)
    {
        vector<int> prefix(s.size());
        prefix[0] = (s[0] - 'a') + 1;
        for (int i = 1; i < s.size(); i++)
        {
            prefix[i] = prefix[i - 1] + (s[i] - 'a' + 1);
        }
        vector<int> suffix(s.size());
        suffix[s.size() - 1] = (s[s.size() - 1] - 'a') + 1;
        for (int i = s.size() - 2; i >= 0; i--)
        {
            suffix[i] = suffix[i + 1] + (s[i] - 'a' + 1);
        }
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (prefix[i] == suffix[i + 1])
            {
                return true;
            }
        }
        return false;
    }
};