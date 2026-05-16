// Problem: Find Minimum in Rotated Sorted Array II
// Link to the problem: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
function findMin(nums: number[]): number {
    const n: number = nums.length;
    let l: number = 0, r: number = n - 1;
    while (l <= r) {
        const m: number = l + Math.floor((r - l) / 2);
        if (nums[m] > nums[r]) {
            l = m + 1;
        }
        else if (nums[m] < nums[l]) {
            r = m;
            l++;
        }
        else {
            r--;
        }
    }
    const ans: number = nums[l];
    return ans;
};