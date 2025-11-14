// Problem: Increment Submatrices by One
// Link to the problem: https://leetcode.com/problems/increment-submatrices-by-one/
function rangeAddQueries(n: number, queries: number[][]): number[][] {
    let prefix: number[][] = Array.from({ length: n + 1 }, () => Array(n + 1).fill(0))
    for (const query of queries) {
        for (let i = query[0]; i <= query[2]; i++) {
            prefix[i][query[1]]++;
            prefix[i][query[3] + 1]--;
        }
    }
    for (let i = 0; i < n; i++) {
        for (let j = 1; j < n; j++) {
            prefix[i][j] += prefix[i][j - 1];
        }
    }
    let ans: number[][] = Array.from({ length: n }, () => Array(n).fill(0));
    for (let i = 0; i < n; i++) {
        for (let j = 0; j < n; j++) {
            ans[i][j] = prefix[i][j];
        }
    }
    return ans;
};