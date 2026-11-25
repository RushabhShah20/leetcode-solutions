// Problem: Smallest Unique Subarray
// Link to the problem: https://leetcode.com/problems/smallest-unique-subarray/
public class Solution
{
    private bool Check(int[] a, int k)
    {
        int n = a.Length;
        Dictionary<long, int> m = new Dictionary<long, int>();
        const int p1 = 31, p2 = 37;
        const long m1 = 1000000007, m2 = 1000000009L;
        long e1 = 1L, e2 = 1L, h1 = 0L, h2 = 0L;
        for (int i = 0; i < k; i++)
        {
            h1 = (h1 * p1 % m1 + a[i]) % m1;
            h2 = (h2 * p2 % m2 + a[i]) % m2;
        }
        for (int i = 1; i < k; i++)
        {
            e1 = e1 * p1 % m1;
            e2 = e2 * p2 % m2;
        }
        m[h1 * m2 + h2] = 1;
        for (int i = k; i < n; i++)
        {
            long x1 = a[i - k] * e1 % m1;
            h1 = (h1 - x1 + m1) % m1;
            h1 = (h1 * p1 % m1 + a[i]) % m1;
            long x2 = a[i - k] * e2 % m2;
            h2 = (h2 - x2 + m2) % m2;
            h2 = (h2 * p2 % m2 + a[i]) % m2;
            int existing;
            if (m.TryGetValue(h1 * m2 + h2, out existing))
            {
                m[h1 * m2 + h2] = existing + 1;
            }
            else
            {
                m[h1 * m2 + h2] = 1;
            }
        }
        foreach (int count in m.Values)
        {
            if (count == 1)
            {
                return false;
            }
        }
        return true;
    }

    public int SmallestUniqueSubarray(int[] nums)
    {
        int n = nums.Length, ans = n, l = 1, r = n;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (Check(nums, m))
            {
                l = m + 1;
            }
            else
            {
                ans = m;
                r = m - 1;
            }
        }
        return ans;
    }
}