// Problem: Find Longest Special Substring That Occurs Thrice I
// Link to the problem: https://leetcode.com/problems/find-longest-special-substring-that-occurs-thrice-i/
class Solution
{
public:
    bool isSpecial(string s)
    {
        bool z = true;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                z = false;
                break;
            }
        }
        if (s[0] != s[s.size() - 1])
        {
            z = false;
        }
        return z;
    }
    int maximumLength(string s)
    {
        map<string, int> m;
        for (int k = 1; k <= s.size(); k++)
        {
            for (int i = 0; i < s.size() - k + 1; i++)
            {
                string x = s.substr(i, k);
                if (isSpecial(x) == true)
                {
                    m[x]++;
                }
            }
        }
        vector<string> a;
        for (auto i : m)
        {
            if (i.second >= 3)
            {
                a.push_back(i.first);
            }
        }
        int ans = 0;
        if (a.size() == 0)
        {
            return -1;
        }
        else
        {
            for (int i = 0; i < a.size(); i++)
            {
                if (a[i].size() > ans)
                {
                    ans = a[i].size();
                }
            }
            return ans;
        }
    }
};