// Problem: Monotonic Array
// Link to the problem: https://leetcode.com/problems/monotonic-array/
function isMonotonic(nums: number[]): boolean {
    let len: number = nums.length;
    if (nums[len - 1] >= nums[0]) {
        for (let i = 1; i < len; i++) {
            if (nums[i] < nums[i - 1])
                return false;
        }
    }
    else {
        for (let i = 0; i < len - 1; i++) {
            if (nums[i] < nums[i + 1])
                return false;
        }
    }
    return true;
};