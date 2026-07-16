// Problem: Sum of GCD of Formed Pairs
// Link to the problem: https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/
/**
 * @param {number[]} nums
 * @return {number}
 */
var gcd = function (a, b) {
    return b == 0 ? a : gcd(b, a % b);
}
var gcdSum = function (nums) {
    const n = nums.length;
    let mx = 0;
    let a = new Array(n);
    for (let i = 0; i < n; i++) {
        mx = Math.max(mx, nums[i]);
        a[i] = gcd(mx, nums[i]);
    }
    let ans = 0;
    a.sort((x, y) => x - y);
    let l = 0, r = n - 1;
    while (l < r) {
        ans += gcd(a[l], a[r]);
        l++;
        r--;
    }
    return ans;
};