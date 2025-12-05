// Problem: Count Partitions with Even Sum Difference
// Link to the problem: https://leetcode.com/problems/count-partitions-with-even-sum-difference/
function countPartitions(nums: number[]): number {
    let sum = 0, ans = nums.length - 1;
    for (const num of nums) {
        sum += num;
    }
    if (sum % 2 === 0) {
        return ans;
    }
    else {
        return 0;
    }
};