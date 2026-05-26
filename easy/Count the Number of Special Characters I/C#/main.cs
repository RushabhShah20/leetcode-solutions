// Problem: Count the Number of Special Characters I
// Link to the problem: https://leetcode.com/problems/count-the-number-of-special-characters-i/
public class Solution
{
    public int NumberOfSpecialChars(string word)
    {
        int n = word.Length, ans = 0;
        int[] lower = new int[26], upper = new int[26];
        for (int i = 0; i < n; i++)
        {
            char c = word[i];
            if (char.IsLower(c))
            {
                lower[c - 'a']++;
            }
            else
            {
                upper[c - 'A']++;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (lower[i] > 0 && upper[i] > 0)
            {
                ans++;
            }
        }
        return ans;
    }
}