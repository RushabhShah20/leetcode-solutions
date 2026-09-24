// Problem: Smallest Index With Digit Sum Equal to Index
// Link to the problem: https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/
/**
 * @param {number[]} nums
 * @return {number}
 */
var sum = function (n) {
    let ans = 0;
    while (n > 0) {
        ans += n % 10;
        n = Math.floor(n / 10);
    }
    return ans;
}
var smallestIndex = function (nums) {
    const n = nums.length;
    for (let i = 0; i < n; i++) {
        if (sum(nums[i]) == i) {
            return i;
        }
    }
    return -1;
};