// Problem: Append Characters to String to Make Subsequence
// Link to the problem: https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/
function appendCharacters(s: string, t: string): number {
    let ans: number = 0, i: number = 0, j: number = 0, n: number = s.length, m: number = t.length;
    while (i < n && j < m) {
        if (s[i] === t[j]) {
            j++;
        }
        i++;
    }
    ans = m - j;
    return ans;
};