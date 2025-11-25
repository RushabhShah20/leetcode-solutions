// Problem: Chalkboard XOR Game
// Link to the problem: https://leetcode.com/problems/chalkboard-xor-game/
function xorGame(nums: number[]): boolean {
    let total: number = 0, n: number = nums.length;
    for (const num of nums) {
        total ^= num;
    }
    const a: boolean = total === 0, b: boolean = n % 2 === 0;
    const ans: boolean = a || b;
    return ans;
};