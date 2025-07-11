// Problem: Existence of a Substring in a String and Its Reverse
// Link to the problem: https://leetcode.com/problems/existence-of-a-substring-in-a-string-and-its-reverse/
class Solution
{
public:
    bool isSubstringPresent(string s)
    {
        string t = s;
        reverse(t.begin(), t.end());
        if (s.size() == 1)
        {
            return false;
        }
        else if (s.size() == 2)
        {
            return s == t;
        }
        else
        {
            for (int i = 0; i < s.size() - 1; i++)
            {
                string x = s.substr(i, 2);
                if (t.find(x) != t.npos)
                {
                    return true;
                }
            }
            return false;
        }
    }
};