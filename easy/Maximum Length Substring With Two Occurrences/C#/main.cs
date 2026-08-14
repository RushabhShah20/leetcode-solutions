// Problem: Maximum Length Substring With Two Occurrences
// Link to the problem: https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/
public class Solution
{
    public int MaximumLengthSubstring(string s)
    {
        int n = s.Length, i = 0, j = 0, ans = 0;
        int[] a = new int[26];
        while (j < n)
        {
            a[s[j] - 'a']++;
            while (a[s[j] - 'a'] > 2 && i < n)
            {
                a[s[i] - 'a']--;
                i++;
            }
            ans = Math.Max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
}