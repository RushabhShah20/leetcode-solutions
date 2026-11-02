// Problem: Minimum Moves to Equal Array Elements II
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
/**
 * @param {number[]} nums
 * @return {number}
 */
var minMoves2 = function (nums) {
    const n = nums.length;
    let ans = 0, l = 0, r = n - 1;
    nums.sort((a, b) => a - b);
    while (l <= r) {
        ans += nums[r] - nums[l];
        l++;
        r--;
    }
    return ans;
};