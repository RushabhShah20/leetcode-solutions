// Problem: Find the Distance Value Between Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
/**
 * @param {number[]} arr1
 * @param {number[]} arr2
 * @param {number} d
 * @return {number}
 */
var findTheDistanceValue = function (arr1, arr2, d) {
    const n = arr1.length, m = arr2.length;
    let ans = 0;
    for (let i = 0; i < n; i++) {
        let x = true;
        for (let j = 0; j < m; j++) {
            if (arr1[i] == arr2[j] || Math.abs(arr1[i] - arr2[j]) <= d) {
                x = false;
                break;
            }
        }
        if (x == true) {
            ans++;
        }
    }
    return ans;
};