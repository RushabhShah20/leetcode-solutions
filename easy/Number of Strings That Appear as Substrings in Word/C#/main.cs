// Problem: Number of Strings That Appear as Substrings in Word
// Link to the problem: https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/
public class Solution
{
    public int NumOfStrings(string[] patterns, string word)
    {
        int n = patterns.Length, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (word.Contains(patterns[i]))
            {
                ans++;
            }
        }
        return ans;
    }
}