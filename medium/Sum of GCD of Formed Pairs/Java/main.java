// Problem: Sum of GCD of Formed Pairs
// Link to the problem: https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/
class Solution {
    public int gcd(final int a, final int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    public long gcdSum(int[] nums) {
        final int n = nums.length;
        int mx = 0;
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            mx = Math.max(mx, nums[i]);
            a[i] = gcd(mx, nums[i]);
        }
        long ans = 0;
        Arrays.sort(a);
        int l = 0, r = n - 1;
        while (l < r) {
            ans += gcd(a[l], a[r]);
            l++;
            r--;
        }
        return ans;
    }
}