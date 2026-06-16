// Problem: Process String with Special Operations I
// Link to the problem: https://leetcode.com/problems/process-string-with-special-operations-i/
class Solution
{
public:
    string processStr(string s)
    {
        const int n = s.size();
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            const char c = s[i];
            if (c == '*')
            {
                if (!ans.empty())
                {
                    ans.pop_back();
                }
            }
            else if (c == '#')
            {
                ans += ans;
            }
            else if (c == '%')
            {
                reverse(ans.begin(), ans.end());
            }
            else
            {
                ans += c;
            }
        }
        return ans;
    }
};