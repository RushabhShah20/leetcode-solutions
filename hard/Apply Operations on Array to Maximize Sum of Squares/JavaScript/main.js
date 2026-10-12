// Problem: Apply Operations on Array to Maximize Sum of Squares
// Link to the problem: https://leetcode.com/problems/apply-operations-on-array-to-maximize-sum-of-squares/
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var maxSum = function (nums, k) {
    const n = nums.length, m = 1000000007;
    let a = new Array(30).fill(0);
    for (let i = 0; i < n; i++) {
        for (let j = 0; j < 30; j++) {
            a[j] += nums[i] >> j & 1;
        }
    }
    let ans = 0;
    for (let i = 0; i < k; i++) {
        let x = 0;
        for (let j = 29; j >= 0; j--) {
            if (a[j] > 0) {
                x |= 1 << j;
                a[j]--;
            }
        }
        ans = Number((BigInt(ans) + BigInt(x) * BigInt(x)) % BigInt(m));
    }
    return ans;
};