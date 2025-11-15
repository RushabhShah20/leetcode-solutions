// Problem: Find if Digit Game Can Be Won
// Link to the problem: https://leetcode.com/problems/find-if-digit-game-can-be-won/
function canAliceWin(nums: number[]): boolean {
    let x: number = 0;
    let y: number = 0;
    for (const num of nums) {
        if (Math.floor(num / 10) === 0) {
            x += num;
        } else {
            y += num;
        }
    }
    return x != y;
};