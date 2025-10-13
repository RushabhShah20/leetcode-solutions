// Problem: Find Resultant Array After Removing Anagrams
// Link to the problem: https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/
public class Solution
{
    public bool compare(String str1, String str2)
    {
        if (str1.Length != str2.Length)
            return false;
        char[] char1 = str1.ToCharArray();
        char[] char2 = str2.ToCharArray();
        Array.Sort(char1);
        Array.Sort(char2);
        return char1.SequenceEqual(char2);
    }
    public IList<string> RemoveAnagrams(string[] words)
    {
        int a = 0;
        List<string> v = new List<string>();
        for (int i = 1; i < words.Length; i++)
        {
            if (compare(words[a], words[i]))
            {
                words[i] = "1";
            }
            else
            {
                a = i;
            }
        }
        for (int i = 0; i < words.Length; i++)
        {
            if (!words[i].SequenceEqual("1"))
            {
                v.Add(words[i]);
            }
        }
        return v;
    }
}