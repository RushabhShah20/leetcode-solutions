// Problem: Binary Prefix Divisible By 5
// Link to the problem: https://leetcode.com/problems/binary-prefix-divisible-by-5/
/**
 * @param {number[]} nums
 * @return {boolean[]}
 */
var prefixesDivBy5 = function (nums) {
    let rem = 0;
    let ans = new Array();
    for (const num of nums) {
        rem = (2 * rem + num) % 5;
        if (rem === 0) {
            ans.push(true);
        }
        else {
            ans.push(false);
        }
    }
    return ans;
};