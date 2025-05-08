// Problem: Detect Capital
// Link to the problem: https://leetcode.com/problems/detect-capital/
public class Solution
{
    public bool DetectCapitalUse(string word)
    {
        bool all_uppercase = true, all_lowercase = true;
        for (int i = 1; i < word.Length; i++)
        {
            if (Char.IsLower(word[i]))
            {
                all_uppercase = false;
            }
            if (Char.IsUpper(word[i]))
            {
                all_lowercase = false;
            }
        }
        if (Char.IsLower(word[0]) && all_lowercase == true)
        {
            return true;
        }
        else if (Char.IsUpper(word[0]) && all_uppercase == true)
        {
            return true;
        }
        else if (Char.IsUpper(word[0]) && all_lowercase == true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}