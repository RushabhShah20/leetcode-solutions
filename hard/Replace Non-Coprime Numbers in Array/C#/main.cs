// Problem: Replace Non-Coprime Numbers in Array
// Link to the problem: https://leetcode.com/problems/replace-non-coprime-numbers-in-array/
public class Solution
{
    public int gcd(int a, int b)
    {
        return b == 0 ? a : gcd(b, a % b);
    }
    public IList<int> ReplaceNonCoprimes(int[] nums)
    {
        IList<int> ans = new List<int>();
        foreach (var num in nums)
        {
            ans.Add(num);
            while (ans.Count > 1)
            {
                int a = ans[ans.Count - 1];
                int b = ans[ans.Count - 2];
                int g = gcd(a, b);
                if (g > 1)
                {
                    ans.RemoveAt(ans.Count - 1);
                    ans.RemoveAt(ans.Count - 1);
                    long lcm = (((long)(a) * (long)(b)) / (long)(g));
                    ans.Add((int)(lcm));
                }
                else
                {
                    break;
                }
            }
        }
        return ans;
    }
}