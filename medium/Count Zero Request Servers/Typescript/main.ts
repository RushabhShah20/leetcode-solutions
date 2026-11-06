// Problem: Count Zero Request Servers
// Link to the problem: https://leetcode.com/problems/count-zero-request-servers/
function countServers(n: number, logs: number[][], x: number, queries: number[]): number[] {
    const m: number = queries.length, k: number = logs.length;
    logs.sort((p: number[], q: number[]): number => p[1] - q[1]);
    const a: number[][] = Array.from({ length: m }, (): number[] => [0, 0]);
    for (let i = 0; i < m; i++) {
        a[i][0] = queries[i];
        a[i][1] = i;
    }
    a.sort((p: number[], q: number[]): number => {
        if (p[0] !== q[0]) {
            return p[0] - q[0];
        }
        return p[1] - q[1];
    });
    const ans: number[] = new Array<number>(m).fill(0), b: number[] = new Array<number>(n + 1).fill(0);
    let l: number = 0, r: number = 0, y: number = 0;
    for (let i = 0; i < m; i++) {
        while (r < k && logs[r][1] <= a[i][0]) {
            const c: number = logs[r][0];
            r++;
            b[c]++;
            if (b[c] === 1) {
                y++;
            }
        }
        while (l < r && logs[l][1] < a[i][0] - x) {
            const c: number = logs[l][0];
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