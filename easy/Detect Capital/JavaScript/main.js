// Problem: Detect Capital
// Link to the problem: https://leetcode.com/problems/detect-capital/
/**
 * @param {string} word
 * @return {boolean}
 */
var detectCapitalUse = function (word) {
    let all_uppercase = true, all_lowercase = true;
    for (let i = 1; i < word.length; i++) {
        if (word[i] === word[i].toLowerCase()) {
            all_uppercase = false;
        }
        if (word[i] === word[i].toUpperCase()) {
            all_lowercase = false;
        }
    }
    if (word[0] === word[0].toLowerCase() && all_lowercase === true) {
        return true;
    }
    else if (word[0] === word[0].toUpperCase() && all_uppercase === true) {
        return true;
    }
    else if (word[0] === word[0].toUpperCase() && all_lowercase === true) {
        return true;
    }
    else {
        return false;
    }
};