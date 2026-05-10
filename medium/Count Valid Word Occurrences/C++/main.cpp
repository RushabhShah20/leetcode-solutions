// Problem: Count Valid Word Occurrences
// Link to the problem: https://leetcode.com/problems/count-valid-word-occurrences/
class Solution
{
public:
    bool isChar(const char c)
    {
        return c >= 'a' && c <= 'z';
    }
    vector<int> countWordOccurrences(vector<string> &chunks, vector<string> &queries)
    {
        string s;
        for (const string &chunk : chunks)
        {
            s.append(chunk);
        }
        const int n = s.size();
        unordered_map<string, int> m;
        int i = 0;
        while (i < n)
        {
            if (!isChar(s[i]))
            {
                i++;
                continue;
            }
            string t;
            while (i < n)
            {
                if (isChar(s[i]))
                {
                    t.append(1, s[i]);
                    i++;
                }
                else if (s[i] == '-' && (i > 0 && i < n - 1) && isChar(s[i - 1]) && isChar(s[i + 1]))
                {
                    t.append(1, s[i]);
                    i++;
                }
                else
                {
                    break;
                }
            }
            if (!t.empty())
            {
                m[t]++;
            }
        }
        vector<int> ans;
        for (const string &query : queries)
        {
            ans.push_back(m[query]);
        }
        return ans;
    }
};
