// Problem: Largest Triangle Area
// Link to the problem: https://leetcode.com/problems/largest-triangle-area/
/**
 * @param {number[][]} points
 * @return {number}
 */
var largestTriangleArea = function (points) {
    let ans = 0;
    let n = points.length;
    for (let i = 0; i < n; i++) {
        for (let j = i + 1; j < n; j++) {
            for (let k = j + 1; k < n; k++) {
                let x1 = points[i][0], x2 = points[j][0], x3 = points[k][0], y1 = points[i][1], y2 = points[j][1], y3 = points[k][1];
                let area = 0.5 * Math.abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
                ans = Math.max(ans, area);
            }
        }
    }
    return ans;
};