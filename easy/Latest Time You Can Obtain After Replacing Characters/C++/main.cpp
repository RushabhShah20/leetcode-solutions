// Problem: Latest Time You Can Obtain After Replacing Characters
// Link to the problem: https://leetcode.com/problems/latest-time-you-can-obtain-after-replacing-characters/
class Solution
{
public:
    string findLatestTime(string s)
    {
        if (s[4] == '?')
        {
            s[4] = '9';
        }
        if (s[3] == '?')
        {
            s[3] = '5';
        }
        if (s[1] == '?')
        {
            if (s[0] == '0')
            {
                s[1] = '9';
            }
            else
            {
                s[1] = '1';
            }
        }
        if (s[0] == '?')
        {
            if (s[1] == '2' || s[1] == '3' || s[1] == '4' || s[1] == '5' || s[1] == '6' || s[1] == '7' || s[1] == '8' || s[1] == '9')
            {
                s[0] = '0';
            }
            else
            {
                s[0] = '1';
            }
        }
        return s;
    }
};