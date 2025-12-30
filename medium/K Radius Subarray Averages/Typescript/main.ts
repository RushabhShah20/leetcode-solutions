// Problem: K Radius Subarray Averages
// Link to the problem: https://leetcode.com/problems/k-radius-subarray-averages/
function getAverages(nums: number[], k: number): number[] {
    const n: number = nums.length, m: number = (2 * k) + 1;
    let ans: number[] = new Array(n).fill(-1);
    let sum: number = 0;
    for (let i = 0; i < n; i++) {
        if (i >= m) {
            sum += nums[i];
            sum -= nums[i - m];
        }
        else {
            sum += nums[i];
        }
        if (i >= m - 1) {
            ans[i - k] = Math.floor(sum / m);
        }
    }
    return ans;
};