// Problem: Taking Maximum Energy From the Mystic Dungeon
// Link to the problem: https://leetcode.com/problems/taking-maximum-energy-from-the-mystic-dungeon/
function maximumEnergy(energy: number[], k: number): number {
    let n: number = energy.length, ans: number = Number.MIN_SAFE_INTEGER;
    let dp: number[] = new Array(n).fill(0);
    for (let i = n - 1; i >= 0; i--) {
        if (i >= n - k) {
            dp[i] = energy[i];
        }
        else {
            dp[i] = energy[i] + dp[i + k];
        }
        ans = Math.max(ans, dp[i]);
    }
    return ans;
};