// Problem: Weighted Word Mapping
// Link to the problem: https://leetcode.com/problems/weighted-word-mapping/
/**
 * @param {string[]} words
 * @param {number[]} weights
 * @return {string}
 */
var mapWordWeights = function (words, weights) {
    let ans = [];
    for (const word of words) {
        let sum = 0;
        for (const ch of word) {
            sum += weights[ch.charCodeAt(0) - 'a'.charCodeAt(0)];
        }
        ans.push(String.fromCharCode('z'.charCodeAt(0) - (sum % 26)));
    }
    return ans.join('');
};