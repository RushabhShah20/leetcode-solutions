// Problem: Number of Senior Citizens
// Link to the problem: https://leetcode.com/problems/number-of-senior-citizens/
/**
 * @param {string[]} details
 * @return {number}
 */
var countSeniors = function (details) {
    let ans = 0;
    for (let i = 0; i < details.length; i++) {
        if (details[i].substring(11, 13) > 60) {
            ans++;
        }
    }
    return ans;
};