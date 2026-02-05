// Problem: Transformed Array
// Link to the problem: https://leetcode.com/problems/transformed-array/
function constructTransformedArray(nums: number[]): number[] {
    const n: number = nums.length;
    let ans: number[] = new Array(n);
    for (let i = 0; i < n; i++) {
        ans[i] = nums[(i + nums[i] % n + n) % n];
    }
    return ans;
};