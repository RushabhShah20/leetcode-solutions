// Problem: Total Waviness of Numbers in Range I
// Link to the problem: https://leetcode.com/problems/total-waviness-of-numbers-in-range-i/
/**
 * @param {number} num1
 * @param {number} num2
 * @return {number}
 */
var totalWaviness = function (num1, num2) {
    let ans = 0;
    for (let i = num1; i <= num2; i++) {
        const x = i.toString();
        const n = x.length;
        for (let j = 1; j < n - 1; j++) {
            if (x[j] > x[j - 1] && x[j] > x[j + 1]) {
                ans++;
            }
            if (x[j] < x[j - 1] && x[j] < x[j + 1]) {
                ans++;
            }
        }
    }
    return ans;
};