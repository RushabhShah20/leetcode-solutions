// Problem: Find Most Frequent Vowel And Consonent
// Link to the problem: https://leetcode.com/problems/find-most-frequent-vowel-and-consonent
class Solution
{
public:
    int maxFreqSum(string s)
    {
        map<char, int> vowels;
        map<char, int> consonents;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                vowels[s[i]]++;
            }
            else
            {
                consonents[s[i]]++;
            }
        }
        int max_vowels = 0, max_consonents = 0;
        for (auto i : vowels)
        {
            if (i.second > max_vowels)
            {
                max_vowels = i.second;
            }
        }
        for (auto i : consonents)
        {
            if (i.second > max_consonents)
            {
                max_consonents = i.second;
            }
        }
        return max_vowels + max_consonents;
    }
}