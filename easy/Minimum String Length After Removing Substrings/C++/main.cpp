// Problem: Minimum String Length After Removing Substrings
// Link to the problem: https://leetcode.com/problems/minimum-string-length-after-removing-substrings/
class Solution
{
public:
    int minLength(string s)
    {
        while (s.find("AB") != s.npos || s.find("CD") != s.npos)
        {
            if (s.find("AB") != s.npos)
            {
                s.erase(s.find("AB"), 2);
            }
            if (s.find("CD") != s.npos)
            {
                s.erase(s.find("CD"), 2);
            }
        }
        return s.size();
    }
};