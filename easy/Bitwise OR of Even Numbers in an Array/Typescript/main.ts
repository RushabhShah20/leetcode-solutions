// Problem: Bitwise OR of Even Numbers in an Array
// Link to the problem: https://leetcode.com/problems/bitwise-or-of-even-numbers-in-an-array/
function evenNumberBitwiseORs(nums: number[]): number {
    let ans: number = 0;
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] % 2 === 0) {
            ans |= nums[i];
        }
    }
    return ans;
};