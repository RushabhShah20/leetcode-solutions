// Problem: Squares of a Sorted Array
// Link to the problem: https://leetcode.com/problems/squares-of-a-sorted-array/
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortedSquares = function (nums) {
    const n = nums.length;
    let ans = new Array(n);
    let l = 0, r = n - 1, i = n - 1;
    while (l <= r) {
        const x = nums[l] * nums[l], y = nums[r] * nums[r];
        if (x > y) {
            ans[i] = x;
            l++;
        }
        else {
            ans[i] = y;
            r--;
        }
        i--;
    }
    return ans;
};