// Problem: Assign Cookies
// Link to the problem: https://leetcode.com/problems/assign-cookies/
function findContentChildren(g: number[], s: number[]): number {
    g.sort((a, b) => a - b);
    s.sort((a, b) => a - b);
    let i: number = 0, j: number = 0, ans: number = 0, n: number = g.length, m: number = s.length;
    while (j < m && i < n) {
        if (g[i] <= s[j]) {
            ans++;
            i++;
        }
        j++;
    }
    return ans;
};