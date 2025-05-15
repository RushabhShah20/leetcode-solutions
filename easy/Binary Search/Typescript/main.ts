// Problem: Binary Search
// Link to the problem: https://leetcode.com/problems/binary-search/
function search(nums: number[], target: number): number {
    let start: number = 0;
    let end: number = nums.length - 1;
    while (start <= end) {
        let mid = (start + (end - start) / 2) >> 0;
        if (nums[mid] === target) {
            return mid;
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
};