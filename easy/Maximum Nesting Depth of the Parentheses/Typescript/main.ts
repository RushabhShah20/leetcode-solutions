// Problem: Maximum Nesting Depth of the Parentheses
// Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
function maxDepth(s: string): number {
    const n: number = s.length;
    let ans: number = 0, x: number = 0;
    for (let i = 0; i < n; i++) {
        if (s[i] == '(') {
            x++;
        }
        if (s[i] == ')') {
            x--;
        }
        ans = Math.max(ans, x);
    }
    return ans;
};