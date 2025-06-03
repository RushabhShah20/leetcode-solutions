// Problem: Convert the Temperature
// Link to the problem: https://leetcode.com/problems/convert-the-temperature/
/**
 * @param {number} celsius
 * @return {number[]}
 */
var convertTemperature = function (celsius) {
    let ans = new Array(2).fill(0);
    ans[0] = celsius + 273.15;
    ans[1] = celsius * 1.8 + 32;
    return ans;
};
