// Problem: Count Commas in Range II
// Link to the problem: https://leetcode.com/problems/count-commas-in-range-ii/
function countCommas(n: number): number {
    let ans: number = 0, x: number = 1000;
    while (x <= n) {
        ans += (n - x + 1);
        x *= 1000;
    }
    return ans;
};