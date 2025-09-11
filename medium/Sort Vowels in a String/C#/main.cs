// Problem: Sort Vowels in a String
// Link to the problem: https://leetcode.com/problems/sort-vowels-in-a-string/
public class Solution
{
    public string SortVowels(string s)
    {
        List<int> indices = new List<int>();
        List<char> alphabets = new List<char>();
        for (int i = 0; i < s.Length; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                indices.Add(i);
                alphabets.Add(s[i]);
            }
        }
        alphabets.Sort();
        char[] t = s.ToCharArray();
        for (int i = 0; i < indices.Count; i++)
        {
            t[indices[i]] = alphabets[i];
        }
        return new string(t);
    }
}