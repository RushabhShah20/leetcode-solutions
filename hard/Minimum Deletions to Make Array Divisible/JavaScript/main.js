// Problem: Minimum Deletions to Make Array Divisible
// Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-array-divisible/
/**
 * @param {number[]} nums
 * @param {number[]} numsDivide
 * @return {number}
 */
var gcd = function (a, b) {
    return b == 0 ? a : gcd(b, a % b);
}
var minOperations = function (nums, numsDivide) {
    let x = numsDivide[0];
    for (let i = 1; i < numsDivide.length; i++) {
        x = gcd(x, numsDivide[i]);
    }
    const y = new Map();
    for (let i = 0; i < nums.length; i++) {
        y.set(nums[i], (y.get(nums[i]) || 0) + 1)
    }
    const sortedKeys = Array.from(y.keys()).sort((a, b) => a - b);
    let ans = 0;
    for (const key of sortedKeys) {
        if (x % key === 0) {
            break;
        } else {
            ans += y.get(key);
        }
    }
    if (ans === nums.length) {
        return -1;
    }
    else {
        return ans;
    }
};