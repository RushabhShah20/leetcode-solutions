// Problem: Decrypt String from Alphabet to Integer Mapping
// Link to the problem: https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/
class Solution
{
public:
    string freqAlphabets(string s)
    {
        string ans;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (i + 2 < n && s[i + 2] == '#')
            {
                int x = ((s[i] - '0') * 10) + (s[i + 1] - '0');
                ans += ('a' + (x - 1));
                i += 2;
            }
            else
            {
                ans += ('a' + (s[i] - '0' - 1));
            }
        }
        return ans;
    }
};