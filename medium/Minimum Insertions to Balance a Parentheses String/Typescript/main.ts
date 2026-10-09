// Problem: Minimum Insertions to Balance a Parentheses String
// Link to the problem: https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/
function minInsertions(s: string): number {
    const n: number = s.length;
    let ans: number = 0, x: number = 0;
    for (let i = 0; i < n; i++) {
        if (s[i] === '(') {
            if ((x & 1) === 1) {
                ans++;
                x++;
            }
            else {
                x += 2;
            }
        }
        else if (x === 0) {
            ans++;
            x = 1;
        }
        else {
            x--;
        }
    }
    ans += x;
    return ans;
};