// Problem: Sort Array By Parity
// Link to the problem: https://leetcode.com/problems/sort-array-by-parity/
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArrayByParity = function (nums) {
    let ans = new Array(), even = new Array(), odd = new Array();
    for (const num of nums) {
        if (num % 2 === 0) {
            even.push(num);
        } else {
            odd.push(num);
        }
    }
    for (const num of even) {
        ans.push(num);
    }
    for (const num of odd) {
        ans.push(num);
    }
    return ans;
};