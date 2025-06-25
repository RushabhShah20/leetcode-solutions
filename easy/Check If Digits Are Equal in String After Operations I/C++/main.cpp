// Problem: Check If Digits Are Equal in String After Operations I
// Link to the problem: https://leetcode.com/problems/check-if-digits-are-equal-in-string-after-operations-i/
class Solution
{
public:
    bool hasSameDigits(string s)
    {
        while (s.size() != 2)
        {
            string t = "";
            for (int i = 0; i < s.size() - 1; i++)
            {
                int x = s[i] - '0';
                int y = s[i + 1] - '0';
                int z = (x + y) % 10;
                char a = z + '0';
                t += a;
            }
            s = t;
        }
        return s[0] == s[1];
    }
};