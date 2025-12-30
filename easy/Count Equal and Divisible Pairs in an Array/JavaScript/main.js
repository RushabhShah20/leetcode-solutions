// Problem: Count Equal and Divisible Pairs in an Array
// Link to the problem: https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var countPairs = function (nums, k) {
    const n = nums.length;
    let ans = 0;
    for (let i = 0; i < n; i++) {
        for (let j = i + 1; j < n; j++) {
            if (nums[i] === nums[j] && (i * j) % k === 0) {
                ans++;
            }
        }
    }
    return ans;
};