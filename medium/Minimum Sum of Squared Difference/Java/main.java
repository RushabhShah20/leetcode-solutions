// Problem: Minimum Sum of Squared Difference
// Link to the problem: https://leetcode.com/problems/minimum-sum-of-squared-difference/
class Solution {
    public long minSumSquareDiff(int[] nums1, int[] nums2, int k1, int k2) {
        final int n = nums1.length;
        long ans = 0;
        int k = k1 + k2, x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            nums1[i] = Math.abs(nums1[i] - nums2[i]);
            x = Math.max(x, nums1[i]);
        }
        int l = 0, r = x;
        while (l <= r) {
            final int m = (l + r) >> 1;
            long a = 0;
            for (int i = 0; i < n; i++) {
                a += nums1[i] > m ? nums1[i] - m : 0;
            }
            final boolean z = a <= k;
            if (z) {
                y = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        for (int i = 0; i < n; i++) {
            if (nums1[i] > y) {
                k -= nums1[i] - y;
            }
        }
        Arrays.sort(nums1);
        for (int i = n - 1; i >= 0; i--) {
            long b = Math.min(y, nums1[i]);
            if (k > 0 && b > 0) {
                k--;
                b--;
            }
            ans += b * b;
        }
        return ans;
    }
}