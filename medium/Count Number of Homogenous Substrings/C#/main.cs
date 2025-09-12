// Problem: Count Number of Homogenous Substrings
// Link to the problem: https://leetcode.com/problems/count-number-of-homogenous-substrings/
public class Solution
{
    public int CountHomogenous(string s)
    {
        int mod = 1000000007;
        int count = 1;
        List<int> a = new List<int>();
        for (int i = 1; i < s.Length; i++)
        {
            if (s[i] == s[i - 1])
            {
                count++;
            }
            else
            {
                a.Add(count);
                count = 1;
            }
        }
        a.Add(count);
        int ans = 0;
        for (int i = 0; i < a.Count; i++)
        {
            ans += (int)((((long)(a[i]) * (long)(a[i] + 1)) / 2) % mod);
        }
        return ans;
    }
}