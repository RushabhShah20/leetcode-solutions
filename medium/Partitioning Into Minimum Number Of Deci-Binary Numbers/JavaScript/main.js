// Problem: Partitioning Into Minimum Number Of Deci-Binary Numbers
// Link to the problem: https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
/**
 * @param {string} n
 * @return {number}
 */
var minPartitions = function (n) {
    let ans = 0;
    for (const c of n) {
        ans = Math.max(ans, c - '0');
    }
    return ans;
};