// Problem: Smallest Number With All Set Bits
// Link to the problem: https://leetcode.com/problems/smallest-number-with-all-set-bits/
public class Solution
{
    public IList<int> ToBinary(int n)
    {
        IList<int> ans = new List<int>();
        while (n > 0)
        {
            ans.Add(n % 2);
            n /= 2;
        }
        return ans;
    }
    public int SmallestNumber(int n)
    {
        IList<int> binary = ToBinary(n);
        int[] a = new int[binary.Count];
        for (int i = 0; i < a.Length; i++)
        {
            a[i] = 1;
        }
        int ans = 0;
        for (int i = 0; i < a.Length; i++)
        {
            ans += ((int)Math.Pow(2, i) * a[i]);
        }
        return ans;
    }
}