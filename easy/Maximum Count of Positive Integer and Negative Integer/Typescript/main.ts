// Problem: Maximum Count of Positive Integer and Negative Integer
// Link to the problem: https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/
function maximumCount(nums: number[]): number {
    let n: number = nums.length, start: number = 0, end: number = n - 1, maxNeg: number = -1, minPos: number = n;
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
    const ans: number = Math.max(maxNeg, minPos);
    return ans;
};