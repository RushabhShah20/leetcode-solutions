// Problem: Smallest Unique Subarray
// Link to the problem: https://leetcode.com/problems/smallest-unique-subarray/
class Solution {
    public boolean check(int[] a, int k) {
        final int n = a.length;
        Map<Long, Integer> m = new HashMap<Long, Integer>();
        final int p1 = 31, p2 = 37;
        final long m1 = 1000000007L, m2 = 1000000009L;
        long e1 = 1L, e2 = 1L, h1 = 0L, h2 = 0L;
        for (int i = 0; i < k; i++) {
            h1 = (h1 * p1 % m1 + a[i]) % m1;
            h2 = (h2 * p2 % m2 + a[i]) % m2;
        }
        for (int i = 1; i < k; i++) {
            e1 = e1 * p1 % m1;
            e2 = e2 * p2 % m2;
        }
        m.put(h1 * m2 + h2, 1);
        for (int i = k; i < n; i++) {
            final long x1 = a[i - k] * e1 % m1;
            h1 = (h1 - x1 + m1) % m1;
            h1 = (h1 * p1 % m1 + a[i]) % m1;
            final long x2 = a[i - k] * e2 % m2;
            h2 = (h2 - x2 + m2) % m2;
            h2 = (h2 * p2 % m2 + a[i]) % m2;
            m.put(h1 * m2 + h2, m.getOrDefault(h1 * m2 + h2, 0) + 1);
        }
        for (final int count : m.values()) {
            if (count == 1) {
                return false;
            }
        }
        return true;
    }

    public int smallestUniqueSubarray(int[] nums) {
        final int n = nums.length;
        int ans = n, l = 1, r = n;
        while (l <= r) {
            final int m = l + (r - l) / 2;
            if (check(nums, m)) {
                l = m + 1;
            } else {
                ans = m;
                r = m - 1;
            }
        }
        return ans;
    }
}