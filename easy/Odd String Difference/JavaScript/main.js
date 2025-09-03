// Problem: Odd String Difference
// Link to the problem: https://leetcode.com/problems/odd-string-difference/
/**
 * @param {string[]} words
 * @return {string}
 */
var arraysEqual = function (arr1, arr2) {
    if (arr1.length !== arr2.length) return false;
    for (let i = 0; i < arr1.length; i++) {
        if (arr1[i] !== arr2[i]) return false;
    }
    return true;
};
var oddString = function (words) {
    let ans = "";
    let diff = new Array();
    for (let i = 0; i < words.length; i++) {
        diff[i] = new Array(words[0].length - 1);
    }
    for (let i = 0; i < words.length; i++) {
        for (let j = 0; j < words[i].length - 1; j++) {
            diff[i][j] = words[i].charCodeAt(j + 1) - words[i].charCodeAt(j);
        }
    }
    if (arraysEqual(diff[1], diff[2])) {
        if (!arraysEqual(diff[0], diff[1]) && !arraysEqual(diff[0], diff[2])) {
            return words[0];
        }
    }
    for (let i = 1; i < diff.length - 1; i++) {
        if (arraysEqual(diff[i - 1], diff[i + 1])) {
            if (!arraysEqual(diff[i], diff[i - 1]) && !arraysEqual(diff[i], diff[i + 1])) {
                return words[i];
            }
        }
    }
    if (arraysEqual(diff[words.length - 3], diff[words.length - 2])) {
        if (!arraysEqual(diff[words.length - 1], diff[words.length - 2]) &&
            !arraysEqual(diff[words.length - 1], diff[words.length - 3])) {
            return words[words.length - 1];
        }
    }
    return ans;
};