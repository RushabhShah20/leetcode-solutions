// Problem: Difference Between Element Sum and Digit Sum of an Array
// Link to the problem: https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/
/**
 * @param {number[]} nums
 * @return {number}
 */
var differenceOfSum = function (nums) {
    let ele_sum = 0, dig_sum = 0;
    for (let num of nums) {
        ele_sum += num;
        while (num > 0) {
            dig_sum += (num % 10);
            num = Math.floor(num / 10);
        }
    }
    if (ele_sum > dig_sum) {
        return ele_sum - dig_sum;
    } else {
        return dig_sum - ele_sum;
    }
};