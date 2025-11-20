// Problem: Set Intersection Size At Least Two
// Link to the problem: https://leetcode.com/problems/set-intersection-size-at-least-two/
/**
 * @param {number[][]} intervals
 * @return {number}
 */
var intersectionSizeTwo = function (intervals) {
    intervals.sort((a, b) => a[1] === b[1] ? b[0] - a[0] : a[1] - b[1]);
    let ans = 0;
    let a = -1, b = -1;
    for (const interval of intervals) {
        let l = interval[0], r = interval[1];
        if (l > b) {
            a = r - 1;
            b = r;
            ans += 2;
        } else if (l > a) {
            a = b;
            b = r;
            ans += 1;
        }
    }
    return ans;
};