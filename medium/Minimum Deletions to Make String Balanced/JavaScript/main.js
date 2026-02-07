// Problem: Minimum Deletions to Make String Balanced
// Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/
/**
 * @param {string} s
 * @return {number}
 */
var minimumDeletions = function (s) {
    let ans = 0, count = 0;
    for (const c of s) {
        if (c === 'b') {
            count++;
        }
        else {
            ans = Math.min(ans + 1, count);
        }
    }
    return ans;
};