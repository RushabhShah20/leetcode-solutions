// Problem: Range Sum of Sorted Subarray Sums
// Link to the problem: https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/
function rangeSum(nums: number[], n: number, left: number, right: number): number {
    let ans: number = 0, mod: number = 1e9 + 7;
    let prefixSum: number[] = new Array();
    for (let i = 0; i < nums.length; i++) {
        let sum: number = nums[i];
        prefixSum.push(sum);
        for (let j = i + 1; j < nums.length; j++) {
            sum = ((sum + nums[j]) % mod);
            prefixSum.push(sum);
        }
    }
    prefixSum.sort((a, b) => a - b);
    for (let i = left - 1; i < right; i++) {
        ans = ((ans + prefixSum[i]) % mod);
    }
    return ans;
};