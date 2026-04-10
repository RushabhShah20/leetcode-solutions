// Problem: Minimum Distance Between Three Equal Elements I
// Link to the problem: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/
/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumDistance = function (nums) {
    const n = nums.length;
    let ans = Number.MAX_SAFE_INTEGER;
    for (let i = 0; i < n - 2; i++) {
        for (let j = i + 1; j < n - 1; j++) {
            for (let k = j + 1; k < n; k++) {
                if (nums[i] === nums[j] && nums[j] === nums[k]) {
                    ans = Math.min(ans, Math.abs(i - j) + Math.abs(j - k) + Math.abs(k - i));
                }
            }
        }
    }
    return ((ans === Number.MAX_SAFE_INTEGER) ? (-1) : (ans));
};