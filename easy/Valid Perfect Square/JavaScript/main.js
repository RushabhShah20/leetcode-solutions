// Problem: Valid Perfect Square
// Link to the problem: https://leetcode.com/problems/valid-perfect-square/
/**
 * @param {number} num
 * @return {boolean}
 */
var isPerfectSquare = function (num) {
    let s = 1,
        e = num;
    while (s <= e) {
        let mid = (s + (e - s) / 2) >> 0;
        if (mid * mid === num) {
            return true;
        } else if (mid * mid > num) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return false;
};
