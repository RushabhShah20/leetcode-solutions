// Problem: Word Pattern
// Link to the problem: https://leetcode.com/problems/word-pattern/
class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        vector<string> a;
        string t;
        const int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ' ')
            {
                a.push_back(t);
                t.clear();
            }
            else
            {
                t.append(1, s[i]);
            }
        }
        if (!t.empty())
        {
            a.push_back(t);
        }
        const int m = pattern.size(), k = a.size();
        if (m != k)
        {
            return false;
        }
        vector<unordered_set<string>> b(26);
        for (int i = 0; i < m; i++)
        {
            b[pattern[i] - 'a'].insert(a[i]);
        }
        for (int i = 0; i < 26; i++)
        {
            if (b[i].size() > 1)
            {
                return false;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (b[i].empty())
            {
                continue;
            }
            for (int j = i + 1; j < 26; j++)
            {
                if (b[j].empty())
                {
                    continue;
                }
                if (*b[i].begin() == *b[j].begin())
                {
                    return false;
                }
            }
        }
        return true;
    }
};