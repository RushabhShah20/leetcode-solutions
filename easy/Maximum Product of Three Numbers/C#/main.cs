// Problem: Maximum Product of Three Numbers
// Link to the problem: https://leetcode.com/problems/maximum-product-of-three-numbers/
public class Solution
{
    public int MaximumProduct(int[] nums)
    {
        int n = nums.Length;
        int a = -1001, b = -1001, c = -1001, x = 1001, y = 1001;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] < x)
            {
                y = x;
                x = nums[i];
            }
            else if (nums[i] < y)
            {
                y = nums[i];
            }
            if (nums[i] > a)
            {
                c = b;
                b = a;
                a = nums[i];
            }
            else if (nums[i] > b)
            {
                c = b;
                b = nums[i];
            }
            else if (nums[i] > c)
            {
                c = nums[i];
            }
        }
        int ans = Math.Max(a * b * c, a * x * y);
        return ans;
    }
}