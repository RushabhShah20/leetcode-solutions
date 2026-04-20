// Problem: Two Furthest Houses With Different Colors
// Link to the problem: https://leetcode.com/problems/two-furthest-houses-with-different-colors/
function maxDistance(colors: number[]): number {
    const n: number = colors.length;
    let ans: number = 0;
    for (let i = 0; i < n; i++) {
        for (let j = i + 1; j < n; j++) {
            if (colors[i] !== colors[j]) {
                ans = Math.max(Math.abs(i - j), ans);
            }
        }
    }
    return ans;
};