// Problem: Product of Array Except Self
// Link to the problem: https://leetcode.com/problems/product-of-array-except-self/
public class Solution
{
    public int[] ProductExceptSelf(int[] nums)
    {
        int n = nums.Length;
        int[] prefix = new int[n];
        int[] suffix = new int[n];
        int[] ans = new int[n];
        prefix[0] = 1;
        for (int i = 1; i < n; i++)
        {
            if (prefix[i - 1] == 0)
            {
                prefix[i] = 0;
            }
            else
            {
                prefix[i] = prefix[i - 1] * nums[i - 1];
            }
        }
        suffix[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (suffix[i + 1] == 0)
            {
                suffix[i] = 0;
            }
            else
            {
                suffix[i] = suffix[i + 1] * nums[i + 1];
            }
        }
        for (int i = 0; i < n; i++)
        {
            ans[i] = prefix[i] * suffix[i];
        }
        return ans;
    }
}