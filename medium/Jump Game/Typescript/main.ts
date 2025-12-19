// Problem: Jump Game
// Link to the problem: https://leetcode.com/problems/jump-game/
function canJump(nums: number[]): boolean {
    let n: number = nums.length, x: number = 0;
    for (let i = 0; i < n; i++) {
        if (i > x) {
            return false;
        }
        x = Math.max(x, i + nums[i]);
    }
    return true;
};