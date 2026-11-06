// Problem: Count Zero Request Servers
// Link to the problem: https://leetcode.com/problems/count-zero-request-servers/
/**
 * @param {number} n
 * @param {number[][]} logs
 * @param {number} x
 * @param {number[]} queries
 * @return {number[]}
 */
var countServers = function (n, logs, x, queries) {
    const m = queries.length, k = logs.length;
    logs.sort((p, q) => p[1] - q[1]);
    const a = Array.from({ length: m }, () => [0, 0]);
    for (let i = 0; i < m; i++) {
        a[i][0] = queries[i];
        a[i][1] = i;
    }
    a.sort((p, q) => {
        if (p[0] !== q[0]) {
            return p[0] - q[0];
        }
        return p[1] - q[1];
    });
    const ans = new Array(m).fill(0), b = new Array(n + 1).fill(0);
    let l = 0, r = 0, y = 0;
    for (let i = 0; i < m; i++) {
        while (r < k && logs[r][1] <= a[i][0]) {
            const c = logs[r][0];
            r++;
            b[c]++;
            if (b[c] === 1) {
                y++;
            }
        }
        while (l < r && logs[l][1] < a[i][0] - x) {
            const c = logs[l][0];
            l++;
            b[c]--;
            if (b[c] === 0) {
                y--;
            }
        }
        ans[a[i][1]] = n - y;
    }
    return ans;
};