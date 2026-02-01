// Problem: Reverse Letters Then Special Characters in a String
// Link to the problem: https://leetcode.com/problems/reverse-letters-then-special-characters-in-a-string/
class Solution
{
public:
    string reverseOnlyLetters(string s)
    {
        const int n = s.size();
        int i = 0, j = n - 1;
        while (i <= j - 1)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                if (s[j] >= 'a' && s[j] <= 'z')
                {
                    swap(s[i], s[j]);
                    i++;
                    j--;
                }
                else
                {
                    j--;
                }
            }
            else
            {
                i++;
            }
        }
        return s;
    }
};