// Problem: Minimum Sum of Squared Difference
// Link to the problem: https://leetcode.com/problems/minimum-sum-of-squared-difference/
/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @param {number} k1
 * @param {number} k2
 * @return {number}
 */
var minSumSquareDiff = function (nums1, nums2, k1, k2) {
    const n = nums1.length;
    let ans = 0, k = k1 + k2, x = 0, y = 0;
    for (let i = 0; i < n; i++) {
        nums1[i] = Math.abs(nums1[i] - nums2[i]);
        x = Math.max(x, nums1[i]);
    }
    let l = 0, r = x;
    while (l <= r) {
        const m = (l + r) >> 1;
        let a = 0;
        for (let i = 0; i < n; i++) {
            a += nums1[i] > m ? nums1[i] - m : 0;
        }
        const z = a <= k;
        if (z) {
            y = m;
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }
    for (let i = 0; i < n; i++) {
        if (nums1[i] > y) {
            k -= nums1[i] - y;
        }
    }
    nums1.sort((a, b) => a - b);
    for (let i = n - 1; i >= 0; i--) {
        let b = Math.min(y, nums1[i]);
        if (k > 0 && b > 0) {
            k--;
            b--;
        }
        ans += b * b;
    }
    return ans;
};