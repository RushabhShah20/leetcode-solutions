// Problem: Find Minimum Operations to Make All Elements Divisible by Three
// Link to the problem: https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/
/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumOperations = function (nums) {
    let ans = 0;
    for (const num of nums) {
        ans += ((num % 3 !== 0) ? (1) : (0));
    }
    return ans;
};