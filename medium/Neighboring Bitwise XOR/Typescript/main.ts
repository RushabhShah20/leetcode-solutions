// Problem: Neighboring Bitwise XOR
// Link to the problem: https://leetcode.com/problems/neighboring-bitwise-xor/
function doesValidArrayExist(derived: number[]): boolean {
    let ans: number = 1;
    for (const derive of derived) {
        ans ^= derive;
    }
    if (ans === 1) {
        return true;
    } else {
        return false;
    }
};