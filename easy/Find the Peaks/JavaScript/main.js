// Problem: Find the Peaks
// Link to the problem: https://leetcode.com/problems/find-the-peaks/
/**
 * @param {number[]} mountain
 * @return {number[]}
 */
var findPeaks = function (mountain) {
    let ans = new Array();
    for (let i = 1; i < mountain.length - 1; i++) {
        if (mountain[i] > mountain[i + 1] && mountain[i] > mountain[i - 1]) {
            ans.push(i);
        }
    }
    return ans;
};