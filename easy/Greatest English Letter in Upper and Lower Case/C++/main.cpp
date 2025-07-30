// Problem: Greatest English Letter in Upper and Lower Case
// Link to the problem: https://leetcode.com/problems/greatest-english-letter-in-upper-and-lower-case/
class Solution
{
public:
    string greatestLetter(string s)
    {
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (isupper(s[i]))
            {
                char x = tolower(s[i]);
                if (s.find(x) != s.npos)
                {
                    int x = s[i] - 'a';
                    int y = ans[0] - 'a';
                    int z = max(x, y);
                    ans = z + 'a';
                }
            }
        }
        return ans;
    }
};