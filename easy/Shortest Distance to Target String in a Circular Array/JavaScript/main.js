// Problem: Shortest Distance to Target String in a Circular Array
// Link to the problem: https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/
/**
 * @param {string[]} words
 * @param {string} target
 * @param {number} startIndex
 * @return {number}
 */
var closestTarget = function (words, target, startIndex) {
    const n = words.length;
    let ans = n;
    for (let i = 0; i < n; i++) {
        if (words[i] === target) {
            const x = Math.abs(i - startIndex);
            ans = Math.min(ans, Math.min(x, n - x));
        }
    }
    return ans == n ? -1 : ans;
};