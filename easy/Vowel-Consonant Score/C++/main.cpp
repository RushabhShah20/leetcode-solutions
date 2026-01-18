// Problem: Vowel-Consonant Score
// Link to the problem: https://leetcode.com/problems/vowel-consonant-score/
class Solution
{
public:
    int vowelConsonantScore(string s)
    {
        int vowel = 0, consonent = 0;
        for (const char &c : s)
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                vowel++;
            }
            else if (c >= 'a' && c <= 'z')
            {
                consonent++;
            }
        }
        if (consonent > 0)
        {
            return vowel / consonent;
        }
        else
        {
            return 0;
        }
    }
};