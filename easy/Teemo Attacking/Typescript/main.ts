// Problem: Teemo Attacking
// Link to the problem: https://leetcode.com/problems/teemo-attacking/
function findPoisonedDuration(timeSeries: number[], duration: number): number {
    let ans: number = 0, n: number = timeSeries.length;
    for (let i = 1; i < n; i++) {
        ans += Math.min(duration, timeSeries[i] - timeSeries[i - 1]);
    }
    ans += duration;
    return ans;
};