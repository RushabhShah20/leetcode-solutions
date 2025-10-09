// Problem: Find the Minimum Amount of Time to Brew Potions
// Link to the problem: https://leetcode.com/problems/find-the-minimum-amount-of-time-to-brew-potions/
function minTime(skill: number[], mana: number[]): number {
    let n: number = skill.length, m: number = mana.length;
    let ans: number[] = new Array(n + 1).fill(0);
    for (let j = 0; j < m; ++j) {
        for (let i = 0; i < n; ++i) {
            ans[i + 1] = Math.max(ans[i + 1], ans[i]) + (mana[j] * skill[i]);
        }
        for (let i = n - 1; i > 0; --i) {
            ans[i] = ans[i + 1] - (mana[j] * skill[i]);
        }
    }
    return ans[n];
};