// Problem: Assign Cookies
// Link to the problem: https://leetcode.com/problems/assign-cookies/
/**
 * @param {number[]} g
 * @param {number[]} s
 * @return {number}
 */
var findContentChildren = function (g, s) {
    g.sort((a, b) => a - b);
    s.sort((a, b) => a - b);
    let i = 0, j = 0, ans = 0, n = g.length, m = s.length;
    while (j < m && i < n) {
        if (g[i] <= s[j]) {
            ans++;
            i++;
        }
        j++;
    }
    return ans;
};