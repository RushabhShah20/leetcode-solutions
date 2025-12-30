// Problem: Removing Minimum and Maximum From Array
// Link to the problem: https://leetcode.com/problems/removing-minimum-and-maximum-from-array/
/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumDeletions = function (nums) {
    const n = nums.length;
    let x = 0, y = 0;
    for (let i = 0; i < n; i++) {
        if (nums[i] > nums[x]) {
            x = i;
        }
        else if (nums[i] < nums[y]) {
            y = i;
        }
    }
    const a = Math.max(x, y) + 1;
    const b = n - Math.min(x, y);
    const c = (Math.min(x, y) + 1) + (n - Math.max(x, y));
    const ans = Math.min(a, b, c);
    return ans;
};