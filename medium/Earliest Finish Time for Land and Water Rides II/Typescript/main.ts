// Problem: Earliest Finish Time for Land and Water Rides II
// Link to the problem: https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-ii/
function solve(n: number, m: number, a1: number[], d1: number[], a2: number[], d2: number[]): number {
    let x: number = Number.MAX_SAFE_INTEGER;
    for (let i = 0; i < n; i++) {
        x = Math.min(x, a1[i] + d1[i]);
    }
    let y: number = Number.MAX_SAFE_INTEGER;
    for (let i = 0; i < m; i++) {
        y = Math.min(y, Math.max(a2[i], x) + d2[i]);
    }
    return y;
}
function earliestFinishTime(landStartTime: number[], landDuration: number[], waterStartTime: number[], waterDuration: number[]): number {
    const n: number = landDuration.length, m: number = waterDuration.length;
    const x: number = solve(n, m, landStartTime, landDuration, waterStartTime, waterDuration);
    const y: number = solve(m, n, waterStartTime, waterDuration, landStartTime, landDuration);
    const ans: number = Math.min(x, y);
    return ans;
};