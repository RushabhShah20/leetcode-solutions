// Problem: First Letter to Appear Twice
// Link to the problem: https://leetcode.com/problems/first-letter-to-appear-twice/
class Solution
{
public:
    char repeatedCharacter(string s)
    {
        unordered_map<char, int> m;
        for (const char &c : s)
        {
            m[c]++;
            if (m[c] >= 2)
            {
                return c;
            }
        }
        return 'a';
    }
};