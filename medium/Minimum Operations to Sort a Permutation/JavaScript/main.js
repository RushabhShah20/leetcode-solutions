// Problem: Minimum Operations to Sort a Permutation
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-sort-a-permutation/
/**
 * @param {number[]} nums
 * @return {number}
 */
var minOperations = function (nums) {
    const n = nums.length;
    if (n == 1) {
        return 0;
    }
    let j = 0;
    while (nums[j] !== 0) {
        j++;
    }
    let x = true, y = true;
    for (let i = 1; i < n; i++) {
        const z = nums[(i + j) % n];
        if (z !== i) {
            x = false;
        }
        if (z !== n - i) {
            y = false;
        }
        if (!x && !y) {
            return -1;
        }
    }
    if (x) {
        return Math.min(j, n - j + 2);
    }
    return Math.min(n - j, j + 2);
};