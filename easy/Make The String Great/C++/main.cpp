// Problem: Make The String Great
// Link to the problem: https://leetcode.com/problems/make-the-string-great/
class Solution
{
public:
    int duplicate(string s)
    {
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (islower(s[i]))
            {
                if (toupper(s[i]) == s[i + 1])
                {
                    return i;
                }
            }
            else
            {
                if (tolower(s[i]) == s[i + 1])
                {
                    return i;
                }
            }
        }
        return -1;
    }
    string makeGood(string s)
    {
        while (duplicate(s) != -1 && !s.empty())
        {
            int x = duplicate(s);
            s.erase(x, 2);
        }
        return s;
    }
};