// Problem: Trim Trailing Vowels
// Link to the problem: https://leetcode.com/problems/trim-trailing-vowels/
class Solution
{
public:
    string trimTrailingVowels(string s)
    {
        const int n = s.size();
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                s.erase(i, 1);
            }
            else
            {
                break;
            }
        }
        return s;
    }
};