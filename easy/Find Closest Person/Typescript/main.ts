// Problem: Find Closest Person
// Link to the problem: https://leetcode.com/problems/find-closest-person/
function findClosest(x: number, y: number, z: number): number {
    if (Math.abs(x - z) < Math.abs(y - z)) {
        return 1;
    } else if (Math.abs(x - z) > Math.abs(y - z)) {
        return 2;
    } else {
        return 0;
    }
};