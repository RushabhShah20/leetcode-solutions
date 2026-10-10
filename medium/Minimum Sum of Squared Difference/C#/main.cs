// Problem: Minimum Sum of Squared Difference
// Link to the problem: https://leetcode.com/problems/minimum-sum-of-squared-difference/
public class Solution
{
    public long MinSumSquareDiff(int[] nums1, int[] nums2, int k1, int k2)
    {
        int n = nums1.Length;
        long ans = 0;
        int k = k1 + k2, x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            nums1[i] = Math.Abs(nums1[i] - nums2[i]);
            x = Math.Max(x, nums1[i]);
        }
        int l = 0, r = x;
        while (l <= r)
        {
            int m = (l + r) >> 1;
            long a = 0;
            for (int i = 0; i < n; i++)
            {
                a += nums1[i] > m ? nums1[i] - m : 0;
            }
            bool z = a <= k;
            if (z)
            {
                y = m;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (nums1[i] > y)
            {
                k -= nums1[i] - y;
            }
        }
        Array.Sort(nums1);
        for (int i = n - 1; i >= 0; i--)
        {
            long b = Math.Min(y, nums1[i]);
            if (k > 0 && b > 0)
            {
                k--;
                b--;
            }
            ans += b * b;
        }
        return ans;
    }
}