// Problem: Maximum Count of Positive Integer and Negative Integer
// Link to the problem: https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/
/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumCount = function (nums) {
    let n = nums.length, start = 0, end = n - 1, maxNeg = -1, minPos = n;
    while (start <= end) {
        let mid = start + Math.floor((end - start) / 2);
        if (nums[mid] > 0) {
            minPos = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    start = 0;
    end = n - 1;
    while (start <= end) {
        let mid = start + Math.floor((end - start) / 2);
        if (nums[mid] < 0) {
            maxNeg = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    maxNeg += 1;
    minPos = n - minPos;
    const ans = Math.max(maxNeg, minPos);
    return ans;
};