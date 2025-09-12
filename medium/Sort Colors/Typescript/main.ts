// Problem: Sort Colors
// Link to the problem: https://leetcode.com/problems/sort-colors/
/**
 Do not return anything, modify nums in-place instead.
 */
function sortColors(nums: number[]): void {
    let zeroes: number = 0, ones: number = 0, twos: number = 0;
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] === 0) {
            zeroes++;
        }
        else if (nums[i] === 1) {
            ones++;
        }
        else {
            twos++;
        }
    }
    for (let i = 0; i < nums.length; i++) {
        if (zeroes > 0) {
            nums[i] = 0;
            zeroes--;
        }
        else if (ones > 0) {
            nums[i] = 1;
            ones--;
        }
        else {
            nums[i] = 2;
            twos--;
        }
    }
};