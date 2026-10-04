// Problem: Valid Parenthesis String
// Link to the problem: https://leetcode.com/problems/valid-parenthesis-string/
function checkValidString(s: string): boolean {
    const n: number = s.length;
    let x: number = 0, y: number = 0;
    for (let i = 0; i < n; i++) {
        if (s[i] === '(' || s[i] === '*') {
            x++;
        }
        else {
            x--;
        }
        if (s[n - 1 - i] === ')' || s[n - 1 - i] === '*') {
            y++;
        }
        else {
            y--;
        }
        if (x < 0 || y < 0) {
            return false;
        }
    }
    return true;
};