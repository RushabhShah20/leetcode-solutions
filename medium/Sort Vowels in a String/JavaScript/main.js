// Problem: Sort Vowels in a String
// Link to the problem: https://leetcode.com/problems/sort-vowels-in-a-string/
/**
 * @param {string} s
 * @return {string}
 */
var sortVowels = function (s) {
    let indices = new Array();
    let alphabets = new Array();
    for (let i = 0; i < s.length; i++) {
        if (s[i] === 'a' || s[i] === 'e' || s[i] === 'i' || s[i] === 'o' || s[i] === 'u' || s[i] === 'A' || s[i] === 'E' || s[i] === 'I' || s[i] === 'O' || s[i] === 'U') {
            indices.push(i);
            alphabets.push(s[i]);
        }
    }
    alphabets.sort();
    let t = s.split('');
    for (let i = 0; i < indices.length; i++) {
        t[indices[i]] = alphabets[i];
    }
    return t.join('');
};