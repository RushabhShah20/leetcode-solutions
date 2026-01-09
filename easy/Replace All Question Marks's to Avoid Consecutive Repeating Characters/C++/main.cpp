// Problem: Replace All ?'s to Avoid Consecutive Repeating Characters
// Link to the problem: https://leetcode.com/problems/replace-all-s-to-avoid-consecutive-repeating-characters/
class Solution
{
public:
    string modifyString(string s)
    {
        if (s[0] == '?')
        {
            if (s.size() == 1)
            {
                s[0] = 'a';
            }
            else if (s[1] == '?')
            {
                s[0] = 'a';
            }
            else
            {
                s[0] = s[1] == 'z' ? 'a' : s[1] + 1;
            }
        }
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == '?')
            {
                s[i] = (s[i - 1] == 'z') ? 'a' : s[i - 1] + 1;
                if (s[i] == s[i + 1])
                {
                    s[i] = (s[i + 1] == 'z') ? 'a' : s[i + 1] + 1;
                }
            }
        }
        return s;
    }
};