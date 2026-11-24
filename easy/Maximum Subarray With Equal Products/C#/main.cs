// Problem: Maximum Subarray With Equal Products
// Link to the problem: https://leetcode.com/problems/maximum-subarray-with-equal-products/
public class Solution
{
    public int Gcd(int a, int b)
    {
        return b == 0 ? a : Gcd(b, a % b);
    }

    public int MaxLength(int[] nums)
    {
        int n = nums.Length, ans = 2, x = 1, i = 0;
        for (int j = 0; j < n; j++)
        {
            while (Gcd(x, nums[j]) > 1)
            {
                x /= nums[i];
                i++;
            }
            x *= nums[j];
            ans = Math.Max(ans, j - i + 1);
        }
        return ans;
    }
}