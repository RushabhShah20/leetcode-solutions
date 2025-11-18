// Problem: 1-bit and 2-bit Characters
// Link to the problem: https://leetcode.com/problems/1-bit-and-2-bit-characters/
function isOneBitCharacter(bits: number[]): boolean {
    let n: number = bits.length;
    let i: number = 0;
    while (i < n - 1) {
        i += bits[i] + 1;
    }
    return i === n - 1;
};