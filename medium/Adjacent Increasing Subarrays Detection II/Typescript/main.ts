// Problem: Adjacent Increasing Subarrays Detection II
// Link to the problem: https://leetcode.com/problems/adjacent-increasing-subarrays-detection-ii/
function maxIncreasingSubarrays(nums: number[]): number {
    let n: number = nums.length;
    let prevK: number = 1;
    let k: number = 1;
    let res: number = 1;
    for (let i = 0; i < n - 1; i++) {
        if (nums[i + 1] > nums[i])
            k++;
        else {
            prevK = k;
            k = 1;
        }
        res = Math.max(res, Math.min(prevK, k));
        res = Math.max(res, Math.floor(k / 2));
    }
    return res;
};