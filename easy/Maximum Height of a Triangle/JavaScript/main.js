// Problem: Maximum Height of a Triangle
// Link to the problem: https://leetcode.com/problems/maximum-height-of-a-triangle/
/**
 * @param {number} red
 * @param {number} blue
 * @return {number}
 */
var maxHeightOfTriangle = function (red, blue) {
    let x = 0, y = 0;
    let a = red, b = blue;
    let i = 1;
    while (a >= 0 && b >= 0) {
        if (i % 2 === 0) {
            a -= i;
            x++;
        }
        else {
            b -= i;
            x++;
        }
        i++;
    }
    a = red, b = blue;
    i = 1;
    while (a >= 0 && b >= 0) {
        if (i % 2 === 0) {
            b -= i;
            y++;
        }
        else {
            a -= i;
            y++;
        }
        i++;
    }
    const ans = Math.max(x - 1, y - 1);
    return ans;
};