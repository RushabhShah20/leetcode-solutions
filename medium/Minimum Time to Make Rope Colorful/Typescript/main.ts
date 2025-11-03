// Problem: Minimum Time to Make Rope Colorful
// Link to the problem: https://leetcode.com/problems/minimum-time-to-make-rope-colorful/
function minCost(colors: string, neededTime: number[]): number {
    let n = colors.length, ans = 0;
    for (let i = 1; i < n; i++) {
        if (colors[i] === colors[i - 1]) {
            ans += (Math.min(neededTime[i], neededTime[i - 1]));
            neededTime[i] = Math.max(neededTime[i], neededTime[i - 1]);
        }
    }
    return ans;
};