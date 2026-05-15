// Problem: Find Minimum in Rotated Sorted Array
// Link to the problem: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
function findMin(nums: number[]): number {
    const n: number = nums.length;
    let ans: number = 5001, l: number = 0, r: number = n - 1;
    while (l <= r) {
        const m: number = l + Math.floor((r - l) / 2);
        if (nums[l] <= nums[m]) {
            ans = Math.min(ans, nums[l]);
            l = m + 1;
        }
        else {
            r = m - 1;
            ans = Math.min(ans, nums[m]);
        }
    }
    return ans;
};