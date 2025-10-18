// Problem: Maximum Number of Distinct Elements After Operations
// Link to the problem: https://leetcode.com/problems/maximum-number-of-distinct-elements-after-operations/
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var maxDistinctElements = function (nums, k) {
    let ans = 0, x = Number.MIN_SAFE_INTEGER;
    nums.sort((a, b) => a - b);
    for (let num of nums) {
        let l = num - k, r = num + k;
        if (x < l) {
            x = l;
            ans++;
        }
        else if (x < r) {
            x++;
            ans++;
        }
    }
    return ans;
};