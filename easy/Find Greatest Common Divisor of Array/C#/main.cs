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
        int maxVal = 0, minVal = 1001;
        foreach (int num in nums)
        {
            maxVal = Math.Max(maxVal, num);
            minVal = Math.Min(minVal, num);
        }
        int ans = gcd(maxVal, minVal);
        return ans;
    }
}