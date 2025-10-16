// Problem: Single Number
// Link to the problem: https://leetcode.com/problems/single-number/
function singleNumber(nums: number[]): number {
    let ans: number = 0;
    for (let num of nums) {
        ans ^= num;
    }
    return ans;
};