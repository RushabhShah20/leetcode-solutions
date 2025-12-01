// Problem: Range Addition II
// Link to the problem: https://leetcode.com/problems/range-addition-ii/
function maxCount(m: number, n: number, ops: number[][]): number {
    for (const op of ops) {
        m = Math.min(m, op[0]);
        n = Math.min(n, op[1]);
    }
    const ans: number = m * n;
    return ans;
};