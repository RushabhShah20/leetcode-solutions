// Problem: Generate Parentheses
// Link to the problem: https://leetcode.com/problems/generate-parentheses/
function generateParenthesis(n: number): string[] {
    if (n === 0) {
        return [""];
    }
    let ans: string[] = new Array();
    for (let i = 0; i < n; i++) {
        const l: string[] = generateParenthesis(i), r: string[] = generateParenthesis(n - 1 - i);
        for (let j = 0; j < l.length; j++) {
            for (let k = 0; k < r.length; k++) {
                ans.push("(" + l[j] + ")" + r[k]);
            }
        }
    }
    return ans;
};