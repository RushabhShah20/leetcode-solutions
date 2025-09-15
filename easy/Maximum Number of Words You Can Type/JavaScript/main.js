// Problem: Maximum Number of Words You Can Type
// Link to the problem: https://leetcode.com/problems/maximum-number-of-words-you-can-type/
/**
 * @param {string} text
 * @param {string} brokenLetters
 * @return {number}
 */
var canBeTypedWords = function (text, brokenLetters) {
    const words = text.split(' ');
    let ans = words.length;
    for (let i = 0; i < words.length; i++) {
        for (let j = 0; j < brokenLetters.length; j++) {
            if (words[i].indexOf(brokenLetters[j]) !== -1) {
                ans--;
                break;
            }
        }
    }
    return ans;
};