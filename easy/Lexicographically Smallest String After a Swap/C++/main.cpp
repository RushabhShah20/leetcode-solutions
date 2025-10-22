// Problem: Lexicographically Smallest String After a Swap
// Link to the problem: https://leetcode.com/problems/lexicographically-smallest-string-after-a-swap/
class Solution
{
public:
    string getSmallestString(string s)
    {
        for (int i = 0; i < s.size() - 1; i++)
        {
            string x = s;
            if (((s[i] - '0') % 2 == 0) && ((s[i + 1] - '0') % 2 == 0) && (s[i] > s[i + 1]))
            {
                char temp = x[i];
                x[i] = x[i + 1];
                x[i + 1] = temp;
                return x;
            }
            else if (((s[i] - '0') % 2 != 0) && ((s[i + 1] - '0') % 2 != 0) && (s[i] > s[i + 1]))
            {
                char temp = x[i];
                x[i] = x[i + 1];
                x[i + 1] = temp;
                return x;
            }
        }
        return s;
    }
};