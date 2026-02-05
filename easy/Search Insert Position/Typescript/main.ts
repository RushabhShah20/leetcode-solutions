// Problem: Search Insert Position
// Link to the problem: https://leetcode.com/problems/search-insert-position/
function searchInsert(nums: number[], target: number): number {
    const n: number = nums.length;
    let l: number = 0, r: number = n - 1;
    while (l <= r) {
        const m: number = Math.floor((l + r) / 2);
        if (nums[m] === target) {
            return m;
        }
        if (nums[m] < target) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return l;
};