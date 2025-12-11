// Problem: Count Covered Buildings
// Link to the problem: https://leetcode.com/problems/count-covered-buildings/
function countCoveredBuildings(n: number, buildings: number[][]): number {
    let maxRow: number[] = new Array(n + 1).fill(0), minRow: number[] = new Array(n + 1).fill(n + 1), maxCol: number[] = new Array(n + 1).fill(0), minCol: number[] = new Array(n + 1).fill(n + 1);
    for (const building of buildings) {
        let x: number = building[0], y: number = building[1];
        maxRow[y] = Math.max(maxRow[y], x);
        minRow[y] = Math.min(minRow[y], x);
        maxCol[x] = Math.max(maxCol[x], y);
        minCol[x] = Math.min(minCol[x], y);
    }
    let ans = 0;
    for (const building of buildings) {
        let x: number = building[0], y: number = building[1];
        if (x > minRow[y] && x < maxRow[y] && y > minCol[x] && y < maxCol[x]) {
            ans++;
        }
    }
    return ans;
};