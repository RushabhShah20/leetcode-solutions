// Problem: Sum of GCD of Formed Pairs
// Link to the problem: https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/
public class Solution
{
    public int gcd(int a, int b)
    {
        return b == 0 ? a : gcd(b, a % b);
    }
    public long GcdSum(int[] nums)
    {
        int n = nums.Length, mx = 0;
        int[] a = new int[n];
        for (int i = 0; i < n; i++)
        {
            mx = Math.Max(mx, nums[i]);
            a[i] = gcd(mx, nums[i]);
        }
        long ans = 0;
        Array.Sort(a);
        int l = 0, r = n - 1;
        while (l < r)
        {
            ans += gcd(a[l], a[r]);
            l++;
            r--;
        }
        return ans;
    }
}