// Problem: Maximize Consecutive Elements in an Array After Modification
// Link to the problem: https://leetcode.com/problems/maximize-consecutive-elements-in-an-array-after-modification/
/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSelectedElements = function (nums) {
    const n = nums.length;
    nums.sort((a, b) => a - b);
    let a = new Array(1000001).fill(0);
    let ans = 0;
    for (let i = 0; i < n; i++) {
        const x = nums[i];
        a[x + 1] = Math.max(a[x + 1], a[x] + 1);
        a[x] = Math.max(a[x], a[x - 1] + 1);
        ans = Math.max(ans, Math.max(a[x], a[x + 1]));
    }
    return ans;
};