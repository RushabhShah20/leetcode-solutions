// Problem: Process String with Special Operations I
// Link to the problem: https://leetcode.com/problems/process-string-with-special-operations-i/
class Solution
{
public:
    string processStr(string s)
    {
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '*')
            {
                if (ans.empty())
                {
                    continue;
                }
                else
                {
                    ans.erase(ans.end() - 1);
                }
            }
            else if (s[i] == '#')
            {
                string x = ans;
                ans += x;
            }
            else if (s[i] == '%')
            {
                reverse(ans.begin(), ans.end());
            }
            else
            {
                ans += s[i];
            }
        }
        return ans;
    }
};