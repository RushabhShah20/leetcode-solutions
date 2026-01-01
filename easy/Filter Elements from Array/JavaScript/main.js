// Problem: Filter Elements from Array
// Link to the problem: https://leetcode.com/problems/filter-elements-from-array/
/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function (arr, fn) {
    let ans = new Array();
    for (let i = 0; i < arr.length; i++) {
        if (fn(arr[i], i)) {
            ans.push(arr[i]);
        }
    }
    return ans;
};