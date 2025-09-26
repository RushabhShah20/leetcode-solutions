// Problem: Positions of Large Groups
// Link to the problem: https://leetcode.com/problems/positions-of-large-groups/
/**
 * @param {string} s
 * @return {number[][]}
 */
var largeGroupPositions = function (s) {
    let ans = new Array();
    let count = 1;
    for (let i = 1; i < s.length; i++) {
        if (s[i] === s[i - 1]) {
            count++;
        }
        else {
            if (count >= 3) {
                ans.push([i - count, i - 1]);
            }
            count = 1;
        }
    }
    if (count >= 3) {
        ans.push([(s.length - count), (s.length - 1)]);
    }
    return ans;
};