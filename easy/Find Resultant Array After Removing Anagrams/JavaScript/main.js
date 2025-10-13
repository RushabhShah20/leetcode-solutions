// Problem: Find Resultant Array After Removing Anagrams
// Link to the problem: https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/
/**
 * @param {string[]} words
 * @return {string[]}
 */
var compare = function (str1, str2) {
    let char1 = str1.split('').sort().join('');
    let char2 = str2.split('').sort().join('');
    return char1 === char2;
};
var removeAnagrams = function (words) {
    let a = 0;
    let v = new Array();
    for (let i = 1; i < words.length; i++) {
        if (compare(words[a], words[i])) {
            words[i] = "1";
        }
        else {
            a = i;
        }
    }
    for (let i = 0; i < words.length; i++) {
        if (words[i] !== "1") {
            v.push(words[i]);
        }
    }
    return v;
};