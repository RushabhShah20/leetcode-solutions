// Problem: Delete Columns to Make Sorted
// Link to the problem: https://leetcode.com/problems/delete-columns-to-make-sorted/
/**
 * @param {string[]} strs
 * @return {number}
 */
var minDeletionSize = function (strs) {
    const n = strs.length, m = strs[0].length;
    let ans = 0;
    for (let j = 0; j < m; j++) {
        for (let i = 0; i < n - 1; i++) {
            if ((strs[i][j]) > (strs[i + 1][j])) {
                ans++;
                break;
            }
        }
    }
    return ans;
};