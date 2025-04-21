// Problem: Count Number of Distinct Integers After Reverse Operations
// Link to the problem: https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/
/**
 * @param {number[]} nums
 * @return {number}
 */
var rev = function (n) {
    let rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n = (n / 10) >> 0;
    }
    return rev;
};
var countDistinctIntegers = function (nums) {
    let s = new Set();
    let ans = Object.assign([], nums);
    for (let i = 0; i < nums.length; i++) {
        ans.push(rev(nums[i]));
    }
    for (let i = 0; i < ans.length; i++) {
        s.add(ans[i]);
    }
    return s.size;
};
