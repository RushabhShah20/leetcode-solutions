// Problem: Check if All the Integers in a Range Are Covered
// Link to the problem: https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/
function isCovered(ranges: number[][], left: number, right: number): boolean {
    let covered: boolean[] = new Array(51).fill(false);
    for (const range of ranges) {
        for (let i = range[0]; i <= range[1]; i++) {
            covered[i] = true;
        }
    }
    for (let i = left; i <= right; i++) {
        if (covered[i] === false) {
            return false;
        }
    }
    return true;
};