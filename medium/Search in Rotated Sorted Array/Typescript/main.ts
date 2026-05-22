// Problem: Search in Rotated Sorted Array
// Link to the problem: https://leetcode.com/problems/search-in-rotated-sorted-array/
function search(nums: number[], target: number): number {
    const n: number = nums.length;
    let l: number = 0, r: number = n - 1;
    while (l <= r) {
        const m: number = l + Math.floor((r - l) / 2);
        if (nums[m] === target) {
            return m;
        }
        if (nums[m] >= nums[l]) {
            if (nums[l] <= target && target < nums[m]) {
                r = m - 1;
            }
            else {
                l = m + 1;
            }
        }
        else {
            if (nums[m] < target && nums[r] >= target) {
                l = m + 1;
            }
            else {
                r = m - 1;
            }
        }
    }
    return -1;
};