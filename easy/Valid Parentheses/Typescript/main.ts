// Problem: Valid Parentheses
// Link to the problem: https://leetcode.com/problems/valid-parentheses/
function isValid(s: string): boolean {
    const n: number = s.length;
    let st: string[] = new Array();
    for (let i = 0; i < n; i++) {
        if (s[i] === '(' || s[i] === '{' || s[i] === '[') {
            st.push(s[i]);
        }
        else {
            if (st.length === 0) {
                return false;
            }
            const x: string = st[st.length - 1], y: string = s[i];
            if ((x === '(' && y === ')') || (x === '{' && y === '}') || (x === '[' && y === ']')) {
                st.pop();
            }
            else {
                return false;
            }
        }
    }
    const ans: boolean = st.length === 0;
    return ans;
};