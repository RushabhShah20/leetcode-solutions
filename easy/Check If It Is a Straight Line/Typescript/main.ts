// Problem: Check If It Is a Straight Line
// Link to the problem: https://leetcode.com/problems/check-if-it-is-a-straight-line/
function checkStraightLine(coordinates: number[][]): boolean {
    let x: boolean = true;
    for (let i = 1; i < coordinates.length - 1; i++) {
        let x1: number = coordinates[i - 1][0], x2: number = coordinates[i][0], x3: number = coordinates[i + 1][0], y1: number = coordinates[i - 1][1], y2: number = coordinates[i][1], y3: number = coordinates[i + 1][1];
        if ((y2 - y1) * (x3 - x2) !== (y3 - y2) * (x2 - x1)) {
            x = false;
            break;
        }
    }
    return x;
};