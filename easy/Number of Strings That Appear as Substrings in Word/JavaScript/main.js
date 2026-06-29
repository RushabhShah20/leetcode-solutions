// Problem: Number of Strings That Appear as Substrings in Word
// Link to the problem: https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/
/**
 * @param {string[]} patterns
 * @param {string} word
 * @return {number}
 */
var numOfStrings = function (patterns, word) {
    const n = patterns.length;
    let ans = 0;
    for (let i = 0; i < n; i++) {
        if (word.includes(patterns[i])) {
            ans++;
        }
    }
    return ans;
};