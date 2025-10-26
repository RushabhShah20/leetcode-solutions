// Problem: Build Array from Permutation
// Link to the problem: https://leetcode.com/problems/build-array-from-permutation/
function buildArray(nums: number[]): number[] {
    let ans: number[] = new Array(nums.length);
    ans[0] = nums[nums[0]];
    for (let i = 0; i < nums.length; i++) {
        ans[i] = nums[nums[i]];
    }
    return ans;
};