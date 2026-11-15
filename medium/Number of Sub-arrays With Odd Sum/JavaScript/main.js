// Problem: Number of Sub-arrays With Odd Sum
// Link to the problem: https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/
/**
 * @param {number[]} arr
 * @return {number}
 */
var numOfSubarrays = function (arr) {
    const n = arr.length;
    let ans = 0, x = 0, y = 1, z = 0;
    for (let i = 0; i < n; i++) {
        const m = 1000000007;
        z += arr[i];
        if (z & 1) {
            ans = (ans + y) % m;
            x++;
        }
        else {
            ans = (ans + x) % m;
            y++;
        }
    }
    return ans;
};