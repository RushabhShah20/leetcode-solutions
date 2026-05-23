// Problem: Check if Array Is Sorted and Rotated
// Link to the problem: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
function check(nums: number[]): boolean {
    const n: number = nums.length;
    let x: number = 0;
    for (let i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            x++;
        }
        if (x > 1) {
            return false;
        }
    }
    return true;
};