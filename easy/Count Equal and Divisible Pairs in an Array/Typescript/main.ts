// Problem: Count Equal and Divisible Pairs in an Array
// Link to the problem: https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/
function countPairs(nums: number[], k: number): number {
    const n: number = nums.length;
    let ans: number = 0;
    for (let i = 0; i < n; i++) {
        for (let j = i + 1; j < n; j++) {
            if (nums[i] === nums[j] && (i * j) % k === 0) {
                ans++;
            }
        }
    }
    return ans;
};