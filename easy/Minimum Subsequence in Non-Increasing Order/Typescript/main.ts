// Problem: Minimum Subsequence in Non-Increasing Order
// Link to the problem: https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/
function minSubsequence(nums: number[]): number[] {
    nums.sort((a, b) => b - a);
    let sum: number = 0;
    for (const num of nums) {
        sum += num;
    }
    let a: number = 0;
    let ans: number[] = new Array();
    for (const num of nums) {
        a += num;
        if (a > sum - a) {
            ans.push(num);
            break;
        }
        else {
            ans.push(num);
        }
    }
    return ans;
};