// Problem: Three Consecutive Odds
// Link to the problem: https://leetcode.com/problems/three-consecutive-odds/
/**
 * @param {number[]} arr
 * @return {boolean}
 */
var threeConsecutiveOdds = function (arr) {
    let count = 0;
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] % 2 === 0) {
            count = 0;
        }
        else {
            count++;
            if (count === 3) {
                return true;
            }
        }
    }
    return false;
};