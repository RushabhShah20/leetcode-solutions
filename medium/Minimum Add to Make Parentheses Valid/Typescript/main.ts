// Problem: Minimum Add to Make Parentheses Valid
// Link to the problem: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
function minAddToMakeValid(s: string): number {
    const n: number = s.length;
    let x: number = 0, y: number = 0;
    for (let i = 0; i < n; i++) {
        if (s[i] === '(') {
            x++;
        }
        else {
            if (x > 0) {
                x--;
            }
            else {
                y++;
            }
        }
    }
    const ans: number = x + y;
    return ans;
};