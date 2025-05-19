// Problem: Two Sum II - Input Array Is Sorted
// Link to the problem: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
/**
 * @param {number[]} numbers
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (numbers, target) {
    let l = 0, r = numbers.length - 1;
    let nums = numbers;
    while (l < r) {
        if (nums[l] + nums[r] === target)
            return [l + 1, r + 1];
        else if (nums[l] + nums[r] < target) {
            let left = l, right = r - 1;
            while (left < right) {
                let mid = ((left + right) / 2) >> 0;
                if (nums[mid] + nums[r] >= target)
                    right = mid;
                else
                    left = mid + 1;
            }
            l = left;
        }
        else {
            let left = l + 1, right = r;
            while (left < right) {
                let mid = ((left + right + 1) / 2) >> 0;
                if (nums[mid] + nums[l] <= target)
                    left = mid;
                else
                    right = mid - 1;
            }
            r = right;
        }
    }
    return [0, 0];
};