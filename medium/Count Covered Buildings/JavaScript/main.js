// Problem: Count Covered Buildings
// Link to the problem: https://leetcode.com/problems/count-covered-buildings/
/**
 * @param {number} n
 * @param {number[][]} buildings
 * @return {number}
 */
var countCoveredBuildings = function (n, buildings) {
    let maxRow = new Array(n + 1).fill(0), minRow = new Array(n + 1).fill(n + 1), maxCol = new Array(n + 1).fill(0), minCol = new Array(n + 1).fill(n + 1);
    for (const building of buildings) {
        let x = building[0], y = building[1];
        maxRow[y] = Math.max(maxRow[y], x);
        minRow[y] = Math.min(minRow[y], x);
        maxCol[x] = Math.max(maxCol[x], y);
        minCol[x] = Math.min(minCol[x], y);
    }
    let ans = 0;
    for (const building of buildings) {
        let x = building[0], y = building[1];
        if (x > minRow[y] && x < maxRow[y] && y > minCol[x] && y < maxCol[x]) {
            ans++;
        }
    }
    return ans;
};