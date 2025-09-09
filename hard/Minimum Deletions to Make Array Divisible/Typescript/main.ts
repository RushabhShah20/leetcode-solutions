// Problem: Minimum Deletions to Make Array Divisible
// Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-array-divisible/
function gcd(a: number, b: number): number {
    return b == 0 ? a : gcd(b, a % b);
}
function minOperations(nums: number[], numsDivide: number[]): number {
    let x: number = numsDivide[0];
    for (let i = 1; i < numsDivide.length; i++) {
        x = gcd(x, numsDivide[i]);
    }
    let ans: number = 0;
    const y: Map<number, number> = new Map();
    for (let i = 0; i < nums.length; i++) {
        y.set(nums[i], (y.get(nums[i]) || 0) + 1)
    }
    const sortedKeys: number[] = Array.from(y.keys()).sort((a, b) => a - b);
    for (const key of sortedKeys) {
        if (x % key === 0) {
            break;
        } else {
            ans += y.get(key)!;
        }
    }
    if (ans === nums.length) {
        return -1;
    } else {
        return ans;
    }
};