// Problem: Construct the Longest New String
// Link to the problem: https://leetcode.com/problems/construct-the-longest-new-string/
function longestString(x: number, y: number, z: number): number {
    if (x > y) {
        return ((2 * ((y) + (y + 1))) + (2 * z));
    }
    else if (x < y) {
        return ((2 * ((x) + (x + 1))) + (2 * z));
    }
    else {
        return ((2 * (x + y)) + (2 * z));
    }
};