// Problem: Minimum Changes To Make Alternating Binary String
// Link to the problem: https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/
/**
 * @param {string} s
 * @return {number}
 */
var minOperations = function (s) {
    const n = s.length;
    let ansEven = 0, ansOdd = 0;
    for (let i = 0; i < n; i++) {
        if (i % 2 === 0) {
            if (s[i] === '0') {
                ansEven++;
            }
            else {
                ansOdd++;
            }
        }
        else {
            if (s[i] === '1') {
                ansEven++;
            }
            else {
                ansOdd++;
            }
        }
    }
    const ans = Math.min(ansEven, ansOdd);
    return ans;
};