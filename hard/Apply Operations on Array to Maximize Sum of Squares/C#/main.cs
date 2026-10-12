// Problem: Apply Operations on Array to Maximize Sum of Squares
// Link to the problem: https://leetcode.com/problems/apply-operations-on-array-to-maximize-sum-of-squares/
public class Solution
{
    public int MaxSum(IList<int> nums, int k)
    {
        int n = nums.Count, m = 1000000007;
        int[] a = new int[30];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 30; j++)
            {
                a[j] += nums[i] >> j & 1;
            }
        }
        long ans = 0;
        for (int i = 0; i < k; i++)
        {
            long x = 0;
            for (int j = 29; j >= 0; j--)
            {
                if (a[j] > 0)
                {
                    x |= 1 << j;
                    a[j]--;
                }
            }
            ans = (ans + x * x) % m;
        }
        return (int)ans;
    }
}