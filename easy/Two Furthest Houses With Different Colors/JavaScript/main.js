// Problem: Two Furthest Houses With Different Colors
// Link to the problem: https://leetcode.com/problems/two-furthest-houses-with-different-colors/
/**
 * @param {number[]} colors
 * @return {number}
 */
var maxDistance = function (colors) {
    const n = colors.length;
    let ans = 0;
    for (let i = 0; i < n; i++) {
        for (let j = i + 1; j < n; j++) {
            if (colors[i] !== colors[j]) {
                ans = Math.max(Math.abs(i - j), ans);
            }
        }
    }
    return ans;
};