// Problem: Find Most Frequent Vowel And Consonant
// Link to the problem: https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/
/**
 * @param {string} s
 * @return {number}
 */
var maxFreqSum = function (s) {
    let vowels = new Map();
    let consonents = new Map();
    for (let ch of s) {
        if (ch === 'a' || ch === 'e' || ch === 'i' || ch === 'o' || ch === 'u') {
            vowels.set(ch, (vowels.get(ch) || 0) + 1);
        }
        else {
            consonents.set(ch, (consonents.get(ch) || 0) + 1);
        }
    }
    let max_vowels = 0, max_consonents = 0;
    for (let [key, value] of vowels) {
        if (value > max_vowels) {
            max_vowels = value;
        }
    }
    for (let [key, value] of consonents) {
        if (value > max_consonents) {
            max_consonents = value;
        }
    }
    return max_vowels + max_consonents;
};