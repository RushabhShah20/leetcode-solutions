// Problem: Queries on Number of Points Inside a Circle
// Link to the problem: https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/
/**
 * @param {number[][]} points
 * @param {number[][]} queries
 * @return {number[]}
 */
var countPoints = function (points, queries) {
    let ans = new Array(queries.length).fill(0);
    for (let i = 0; i < queries.length; i++) {
        for (let j = 0; j < points.length; j++) {
            if (
                queries[i][2] * queries[i][2] >=
                (queries[i][0] - points[j][0]) * (queries[i][0] - points[j][0]) +
                (queries[i][1] - points[j][1]) * (queries[i][1] - points[j][1])
            ) {
                ans[i]++;
            }
        }
    }
    return ans;
};
