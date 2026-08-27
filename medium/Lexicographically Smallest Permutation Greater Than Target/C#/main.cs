// Problem: Lexicographically Smallest Permutation Greater Than Target
// Link to the problem: https://leetcode.com/problems/lexicographically-smallest-permutation-greater-than-target/
using System.Text;

public class Solution
{
    public string get(int[] a)
    {
        StringBuilder ans = new StringBuilder();
        for (int i = 0; i < 26; i++)
        {
            ans.Append(new string((char)('a' + i), a[i]));
        }
        return ans.ToString();
    }
    public string LexGreaterPermutation(string s, string target)
    {
        int n = s.Count();
        int[] a = new int[26];
        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'a']++;
            a[target[i] - 'a']--;
        }
        char[] t = target.ToCharArray();
        for (int i = n - 1; i >= 0; i--)
        {
            int x = t[i] - 'a';
            a[x]++;
            int mn = int.MaxValue;
            for (int j = 0; j < 26; j++)
            {
                mn = Math.Min(mn, a[j]);
            }
            if (mn < 0)
            {
                continue;
            }
            for (int j = x + 1; j < 26; j++)
            {
                if (a[j] > 0)
                {
                    a[j]--;
                    t[i] = (char)('a' + j);
                    string ans = new string(t, 0, i + 1) + get(a);
                    return ans;
                }
            }
        }
        return "";
    }
}