// Problem: Maximum K to Sort a Permutation
// Link to the problem: https://leetcode.com/problems/maximum-k-to-sort-a-permutation/
function sortPermutation(nums: number[]): number {
    const n: number = nums.length;
    let ans: number = -1;
    for (let i = 0; i < n; i++) {
        if (nums[i] !== i) {
            ans &= nums[i];
        }
    }
    if (ans === -1) {
        return 0;
    }
    else {
        return ans;
    }
};