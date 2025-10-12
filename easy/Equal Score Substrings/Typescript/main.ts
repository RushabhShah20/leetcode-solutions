// Problem: Equal Score Substrings
// Link to the problem: https://leetcode.com/problems/equal-score-substrings/
function scoreBalance(s: string): boolean {
    let prefix: number[] = new Array(s.length);
    prefix[0] = (s.charCodeAt(0) - 97) + 1;
    for (let i = 1; i < s.length; i++) {
        prefix[i] = prefix[i - 1] + (s.charCodeAt(i) - 97 + 1);
    }
    let suffix: number[] = new Array(s.length);
    suffix[s.length - 1] = (s.charCodeAt(s.length - 1) - 97) + 1;
    for (let i = s.length - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + (s.charCodeAt(i) - 97 + 1);
    }
    for (let i = 0; i < s.length - 1; i++) {
        if (prefix[i] === suffix[i + 1]) {
            return true;
        }
    }
    return false;
};