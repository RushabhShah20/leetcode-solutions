// Problem: Find Missing Elements
// Link to the problem: https://leetcode.com/problems/find-missing-elements/
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findMissingElements = function (nums) {
    const n = nums.length;
    let mn = 101;
    let mx = 1;
    for (let i = 0; i < n; i++) {
        mn = Math.min(mn, nums[i]);
        mx = Math.max(mx, nums[i]);
    }
    const m = mx - mn + 1;
    let a = new Array(m).fill(0);
    for (let i = 0; i < n; i++) {
        a[nums[i] - mn]++;
    }
    let ans = new Array();
    for (let i = 0; i < m; i++) {
        if (a[i] === 0) {
            ans.push(i + mn);
        }
    }
    return ans;
};