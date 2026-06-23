// Problem: Remove Vowels from a String
// Link to the problem: https://leetcode.com/problems/remove-vowels-from-a-string/
class Solution
{
public:
    bool isVowel(const char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    string removeVowels(string s)
    {
        const int n = s.size();
        string ans;
        for (int i = 0; i < n; i++)
        {
            const char c = s[i];
            if (!isVowel(c))
            {
                ans.append(1, c);
            }
        }
        return ans;
    }
};