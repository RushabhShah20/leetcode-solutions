// Problem: Detect Capital
// Link to the problem: https://leetcode.com/problems/detect-capital/
function detectCapitalUse(word: string): boolean {
    let all_uppercase: boolean = true, all_lowercase: boolean = true;
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