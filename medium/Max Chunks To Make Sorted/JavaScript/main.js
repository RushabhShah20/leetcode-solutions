// Problem: Max Chunks To Make Sorted
// Link to the problem: https://leetcode.com/problems/max-chunks-to-make-sorted/
/**
 * @param {number[]} arr
 * @return {number}
 */
var maxChunksToSorted = function (arr) {
    let ans = 0, n = arr.length, max = 0;
    for (let i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (max === i) {
            ans++;
        }
    }
    return ans;
};