// Problem: Remove Outermost Parentheses
// Link to the problem: https://leetcode.com/problems/remove-outermost-parentheses/
function removeOuterParentheses(s: string): string {
    const n: number = s.length;
    let x: number = 0;
    let ans: string = "";
    for (let i = 0; i < n; i++) {
        if (s[i] === ')') {
            x--;
        }
        if (x > 0) {
            ans += s[i];
        }
        if (s[i] === '(') {
            x++;
        }
    }
    return ans;
};