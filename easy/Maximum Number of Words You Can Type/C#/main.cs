// Problem: Maximum Number of Words You Can Type
// Link to the problem: https://leetcode.com/problems/maximum-number-of-words-you-can-type/
public class Solution
{
    public int CanBeTypedWords(string text, string brokenLetters)
    {
        string[] words = text.Split(' ');
        int ans = words.Length;
        for (int i = 0; i < words.Length; i++)
        {
            for (int j = 0; j < brokenLetters.Length; j++)
            {
                if (words[i].IndexOf(brokenLetters[j]) != -1)
                {
                    ans--;
                    break;
                }
            }
        }
        return ans;
    }
}