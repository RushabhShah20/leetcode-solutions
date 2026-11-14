// Problem: Minimum Positive Sum Subarray
// Link to the problem: https://leetcode.com/problems/minimum-positive-sum-subarray/
/**
 * @param {number[]} nums
 * @param {number} l
 * @param {number} r
 * @return {number}
 */
var minimumSumSubarray = function (nums, l, r) {
    const n = nums.length;
    let z = 100001;
    for (let i = 0; i < n; i++) {
        let x = 0;
        for (let j = i; j < n; j++) {
            x += nums[j];
            const y = j - i + 1;
            if (x > 0 && y >= l && y <= r) {
                z = Math.min(z, x);
            }
        }
    }
    const ans = z == 100001 ? -1 : z;
    return ans;
};