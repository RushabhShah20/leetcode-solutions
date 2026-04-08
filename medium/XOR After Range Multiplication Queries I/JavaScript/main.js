// Problem: XOR After Range Multiplication Queries I
// Link to the problem: https://leetcode.com/problems/xor-after-range-multiplication-queries-i/
/**
 * @param {number[]} nums
 * @param {number[][]} queries
 * @return {number}
 */
var xorAfterQueries = function (nums, queries) {
    const mod = 1000000007;
    for (const query of queries) {
        for (let i = query[0]; i <= query[1]; i += query[2]) {
            nums[i] = (nums[i] * query[3]) % mod;
        }
    }
    let ans = 0;
    for (const num of nums) {
        ans ^= num;
    }
    return ans;
};