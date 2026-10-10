// Problem: Minimum Sum of Squared Difference
// Link to the problem: https://leetcode.com/problems/minimum-sum-of-squared-difference/
function minSumSquareDiff(nums1: number[], nums2: number[], k1: number, k2: number): number {
    const n: number = nums1.length;
    let ans: number = 0, k: number = k1 + k2, x: number = 0, y: number = 0;
    for (let i = 0; i < n; i++) {
        nums1[i] = Math.abs(nums1[i] - nums2[i]);
        x = Math.max(x, nums1[i]);
    }
    let l: number = 0, r: number = x;
    while (l <= r) {
        const m: number = (l + r) >> 1;
        let a: number = 0;
        for (let i = 0; i < n; i++) {
            a += nums1[i] > m ? nums1[i] - m : 0;
        }
        const z: boolean = a <= k;
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
        let b: number = Math.min(y, nums1[i]);
        if (k > 0 && b > 0) {
            k--;
            b--;
        }
        ans += b * b;
    }
    return ans;
};