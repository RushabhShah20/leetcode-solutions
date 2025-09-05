// Problem: Vowels Game in a String
// Link to the problem: https://leetcode.com/problems/vowels-game-in-a-string/
public class Solution
{
    public bool DoesAliceWin(string s)
    {
        for (int i = 0; i < s.Length; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                return true;
            }
        }
        return false;
    }
}