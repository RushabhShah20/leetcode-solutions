// Problem: Maximum XOR After Operations
// Link to the problem: https://leetcode.com/problems/maximum-xor-after-operations/
function maximumXOR(nums: number[]): number {
    let ans: number = 0;
    for (const num of nums) {
        ans |= num;
    }
    return ans;
};