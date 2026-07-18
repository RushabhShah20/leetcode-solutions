// Problem: Find Greatest Common Divisor of Array
// Link to the problem: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
public class Solution
{
    public int gcd(int a, int b)
    {
        return b == 0 ? a : gcd(b, a % b);
    }
    public int FindGCD(int[] nums)
    {
        int n = nums.Length, mx = 0, mn = 1001;
        for (int i = 0; i < n; i++)
        {
            mx = Math.Max(mx, nums[i]);
            mn = Math.Min(mn, nums[i]);
        }
        int ans = gcd(mx, mn);
        return ans;
    }
}