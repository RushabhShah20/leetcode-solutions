// Problem: Count Binary Substrings
// Link to the problem: https://leetcode.com/problems/count-binary-substrings/
/**
 * @param {string} s
 * @return {number}
 */
var countBinarySubstrings = function (s) {
    const n = s.length;
    let ans = 0, prev = 0, curr = 1;
    for (let i = 1; i < n; i++) {
        if (s[i - 1] !== s[i]) {
            ans += Math.min(prev, curr);
            prev = curr;
            curr = 1;
        }
        else {
            curr++;
        }
    }
    ans += Math.min(prev, curr);
    return ans;
};