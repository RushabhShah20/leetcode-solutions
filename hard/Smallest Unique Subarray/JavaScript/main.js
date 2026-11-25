// Problem: Smallest Unique Subarray
// Link to the problem: https://leetcode.com/problems/smallest-unique-subarray/
/**
 * @param {number[]} nums
 * @return {number}
 */
var check = function (a, k) {
    const n = a.length;
    const m = new Map();
    const p1 = 31, p2 = 37, m1 = 1000000007, m2 = 1000000009;
    const bigM2 = BigInt(m2);
    let e1 = 1, e2 = 1, h1 = 0, h2 = 0;
    for (let i = 0; i < k; i++) {
        h1 = (h1 * p1 % m1 + a[i]) % m1;
        h2 = (h2 * p2 % m2 + a[i]) % m2;
    }
    for (let i = 1; i < k; i++) {
        e1 = e1 * p1 % m1;
        e2 = e2 * p2 % m2;
    }
    let key = BigInt(h1) * bigM2 + BigInt(h2);
    m.set(key, 1);
    for (let i = k; i < n; i++) {
        const x1 = a[i - k] * e1 % m1;
        h1 = (h1 - x1 + m1) % m1;
        h1 = (h1 * p1 % m1 + a[i]) % m1;
        const x2 = a[i - k] * e2 % m2;
        h2 = (h2 - x2 + m2) % m2;
        h2 = (h2 * p2 % m2 + a[i]) % m2;
        key = BigInt(h1) * bigM2 + BigInt(h2);
        m.set(key, (m.get(key) || 0) + 1);
    }
    for (const count of m.values()) {
        if (count === 1) {
            return false;
        }
    }
    return true;
}
var smallestUniqueSubarray = function (nums) {
    const n = nums.length;
    let ans = n, l = 1, r = n;
    while (l <= r) {
        const m = l + Math.floor((r - l) / 2);
        if (check(nums, m)) {
            l = m + 1;
        } else {
            ans = m;
            r = m - 1;
        }
    }
    return ans;
};