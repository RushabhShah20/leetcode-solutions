// Problem: Maximum Height of a Triangle
// Link to the problem: https://leetcode.com/problems/maximum-height-of-a-triangle/
function maxHeightOfTriangle(red: number, blue: number): number {
    let x: number = 0, y: number = 0;
    let a: number = red, b: number = blue;
    let i: number = 1;
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
    const ans: number = Math.max(x - 1, y - 1);
    return ans;
};