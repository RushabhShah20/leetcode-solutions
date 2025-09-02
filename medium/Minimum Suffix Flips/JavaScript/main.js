// Problem: Minimum Suffix Flips
// Link to the problem: https://leetcode.com/problems/minimum-suffix-flips/
/**
 * @param {string} target
 * @return {number}
 */
var minFlips = function (target) {
    let ans = 0;
    let x = false;
    if (target[0] === '1') {
        ans++;
        x = true;
    }
    for (let i = 1; i < target.length; i++) {
        if (target[i] === '1') {
            if (x === false) {
                ans++;
                x = true;
            }
        }
        else {
            if (x === true) {
                ans++;
                x = false;
            }
        }
    }
    return ans;
};