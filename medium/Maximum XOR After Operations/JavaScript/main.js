// Problem: Maximum XOR After Operations
// Link to the problem: https://leetcode.com/problems/maximum-xor-after-operations/
/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumXOR = function (nums) {
    let ans = 0;
    for (const num of nums) {
        ans |= num;
    }
    return ans;
};