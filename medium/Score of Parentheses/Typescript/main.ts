// Problem: Score of Parentheses
// Link to the problem: https://leetcode.com/problems/score-of-parentheses/
function scoreOfParentheses(s: string): number {
    const n: number = s.length;
    let ans: number = 0, x: number = 0;
    for (let i = 0; i < n; i++) {
        if (s[i] === '(') {
            x++;
        }
        else {
            x--;
            if (s[i - 1] === '(') {
                ans += 1 << x;
            }
        }
    }
    return ans;
};