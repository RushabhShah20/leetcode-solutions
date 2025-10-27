// Problem: Is Subsequence
// Link to the problem: https://leetcode.com/problems/is-subsequence/
function isSubsequence(s: string, t: string): boolean {
    let n: number = t.length, m: number = s.length, i: number, j: number;
    for (i = 0, j = 0; i < n && j < m; i++) {
        if (t[i] === s[j]) {
            j++;
        }
    }
    if (j < m) {
        return false;
    }
    else {
        return true;
    }
};