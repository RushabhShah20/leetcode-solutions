// Problem: Unique Paths
// Link to the problem: https://leetcode.com/problems/unique-paths/
function uniquePaths(m: number, n: number): number {
    let ans: number = 1;
    let down_moves: number = m - 1;
    let right_moves: number = n - 1;
    let x: number = Math.max(down_moves, right_moves);
    let y = Math.min(down_moves, right_moves);
    for (let i = 1; i <= y; i++) {
        ans *= (x + i);
        ans = ans / i >> 0;
    }
    return ans;
};