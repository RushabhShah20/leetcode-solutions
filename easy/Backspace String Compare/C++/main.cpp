// Problem: Backspace String Compare
// Link to the problem: https://leetcode.com/problems/backspace-string-compare/
class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        while (s.find('#') != s.npos)
        {
            int index = s.find('#');
            if (index == 0)
            {
                s.erase(index, 1);
            }
            else
            {
                s.erase(index - 1, 2);
            }
        }
        while (t.find('#') != t.npos)
        {
            int index = t.find('#');
            if (index == 0)
            {
                t.erase(index, 1);
            }
            else
            {
                t.erase(index - 1, 2);
            }
        }
        return s == t;
    }
};