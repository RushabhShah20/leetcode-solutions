// Problem: Find Xor-Beauty of Array
// Link to the problem: https://leetcode.com/problems/find-xor-beauty-of-array/
function xorBeauty(nums: number[]): number {
    let ans: number = 0;
    for (const num of nums) {
        ans ^= num;
    }
    return ans;
};