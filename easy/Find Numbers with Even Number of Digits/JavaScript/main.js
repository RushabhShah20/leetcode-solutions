// Problem: Find Numbers with Even Number of Digits
// Link to the problem: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
/**
 * @param {number[]} nums
 * @return {number}
 */
var findNumbers = function (nums) {
    let ans = 0;
    for (let i = 0; i < nums.length; i++) {
        let n = nums[i];
        let count = 0;
        while (n !== 0) {
            count++;
            n = Math.floor(n / 10);
        }
        if (count % 2 === 0) {
            ans++;
        }
    }
    return ans;
};