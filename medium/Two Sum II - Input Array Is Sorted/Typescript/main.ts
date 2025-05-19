// Problem: Two Sum II - Input Array Is Sorted
// Link to the problem: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
function twoSum(numbers: number[], target: number): number[] {
    let l: number = 0, r: number = numbers.length - 1;
    let nums: number[] = numbers;
    while (l < r) {
        if (nums[l] + nums[r] === target)
            return [l + 1, r + 1];
        else if (nums[l] + nums[r] < target) {
            let left: number = l, right: number = r - 1;
            while (left < right) {
                let mid: number = ((left + right) / 2) >> 0;
                if (nums[mid] + nums[r] >= target)
                    right = mid;
                else
                    left = mid + 1;
            }
            l = left;
        }
        else {
            let left: number = l + 1, right: number = r;
            while (left < right) {
                let mid: number = ((left + right + 1) / 2) >> 0;
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