// Problem: Number Complement
// Link to the problem: https://leetcode.com/problems/number-complement/
function findComplement(num: number): number {
    if (num === 0) {
        return 1;
    }
    let x: number = 1;
    while (x < num) {
        x = (x << 1) | 1;
    }
    const ans: number = num ^ x;
    return ans;
};