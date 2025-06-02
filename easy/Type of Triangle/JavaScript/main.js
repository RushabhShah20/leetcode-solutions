// Problem: Type of Triangle
// Link to the problem: https://leetcode.com/problems/type-of-triangle/
/**
 * @param {number[]} nums
 * @return {string}
 */
var triangleType = function (nums) {
    let a = nums[0], b = nums[1], c = nums[2];
    if (a + b > c && b + c > a && c + a > b) {
        if (a === b && b === c && c === a) {
            return "equilateral";
        }
        else if (a === b || b === c || c === a) {
            return "isosceles";
        }
        else {
            return "scalene";
        }
    }
    return "none";
};