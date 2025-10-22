// Problem: Maximum Score After Splitting a String
// Link to the problem: https://leetcode.com/problems/maximum-score-after-splitting-a-string/
/**
 * @param {string} s
 * @return {number}
 */
var maxScore = function (s) {
    let ans = 0;
    let pref = new Array(s.length).fill(0);
    if (s[0] == '1') {
        pref[0] = 0;
    }
    else {
        pref[0] = 1;
    }
    for (let i = 1; i < s.length; i++) {
        if (s[i] == '1') {
            pref[i] = pref[i - 1];
        }
        else {
            pref[i] = pref[i - 1] + 1;
        }
    }
    for (let i = 0; i < s.length - 1; i++) {
        let score = (pref[i] + ((s.length - i - 1) - (pref[s.length - 1] - pref[i])));
        ans = Math.max(ans, score);
    }
    return ans;
};