// Problem: Find Kth Bit in Nth Binary String
// Link to the problem: https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/
function findKthBit(n: number, k: number): string {
    if (n === 1) {
        return '0';
    }
    const x: number = (1 << n) - 1, m: number = Math.floor(x / 2) + 1;
    if (k === m) {
        return '1';
    }
    if (k < m) {
        return findKthBit(n - 1, k);
    }
    if (findKthBit(n - 1, x - k + 1) === '0') {
        return '1';
    }
    return '0';
};