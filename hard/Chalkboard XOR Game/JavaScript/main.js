// Problem: Chalkboard XOR Game
// Link to the problem: https://leetcode.com/problems/chalkboard-xor-game/
/**
 * @param {number[]} nums
 * @return {boolean}
 */
var xorGame = function (nums) {
    let total = 0, n = nums.length;
    for (const num of nums) {
        total ^= num;
    }
    const a = total === 0, b = n % 2 === 0;
    const ans = a || b;
    return ans;
};