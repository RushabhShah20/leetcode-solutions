// Problem: Single Element in a Sorted Array
// Link to the problem: https://leetcode.com/problems/single-element-in-a-sorted-array/
function singleNonDuplicate(nums: number[]): number {
    let m: Map<number, number> = new Map();
    for (let num of nums) {
        m.set(num, (m.get(num) || 0) + 1);
    }
    for (let [key, value] of m) {
        if (value === 1) {
            return key;
        }
    }
};