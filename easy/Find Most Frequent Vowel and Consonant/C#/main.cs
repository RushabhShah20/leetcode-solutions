// Problem: Find Most Frequent Vowel And Consonant
// Link to the problem: https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/
public class Solution
{
    public int MaxFreqSum(string s)
    {
        Dictionary<char, int> vowels = new Dictionary<char, int>();
        Dictionary<char, int> consonents = new Dictionary<char, int>();
        for (int i = 0; i < s.Length; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                if (vowels.ContainsKey(s[i]))
                {
                    vowels[s[i]]++;
                }
                else
                {
                    vowels[s[i]] = 1;
                }
            }
            else
            {
                if (consonents.ContainsKey(s[i]))
                {
                    consonents[s[i]]++;
                }
                else
                {
                    consonents[s[i]] = 1;
                }
            }
        }
        int maxVowels = 0;
        int maxConsonents = 0;
        foreach (var kvp in vowels)
        {
            if (kvp.Value > maxVowels)
            {
                maxVowels = kvp.Value;
            }
        }
        foreach (var kvp in consonents)
        {
            if (kvp.Value > maxConsonents)
            {
                maxConsonents = kvp.Value;
            }
        }
        return maxVowels + maxConsonents;
    }
}