// Problem: Element Appearing More Than 25% In Sorted Array
// Link to the problem: https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/
/**
 * @param {number[]} arr
 * @return {number}
 */
var findSpecialInteger = function (arr) {
    const n = arr.length, m = Math.floor(n / 4);
    for (let i = 0; i < n - m; i++) {
        if (arr[i] === arr[i + m]) {
            return arr[i];
        }
    }
    return -1;
};