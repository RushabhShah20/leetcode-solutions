// Problem: Smallest Missing Integer Greater Than Sequential Prefix Sum
// Link to the problem: https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/
/**
 * @param {number[]} nums
 * @return {number}
 */
var missingInteger = function (nums) {
    const n = nums.length;
    const s = new Set(nums);
    let m = 1;
    for (let i = 1; i < n; i++) {
        if (nums[i] === nums[i - 1] + 1) {
            m += 1;
        } else {
            break;
        }
    }
    let ans = ((nums[m - 1] + nums[0]) * m) / 2;
    while (s.has(ans)) {
        ans += 1;
    }
    return ans;
};