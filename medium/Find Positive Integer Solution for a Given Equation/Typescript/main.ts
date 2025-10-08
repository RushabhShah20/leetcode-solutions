// Problem: Find Positive Integer Solution for a Given Equation
// Link to the problem: https://leetcode.com/problems/find-positive-integer-solution-for-a-given-equation/
/**
 * // This is the CustomFunction's API interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 *      f(x: number, y: number): number {}
 * }
 */

function findSolution(customfunction: CustomFunction, z: number): number[][] {
    let ans: number[][] = new Array();
    for (let x = 1; x <= 1000; x++) {
        for (let y = 1; y <= 1000; y++) {
            if (customfunction.f(x, y) === z) {
                ans.push([x, y]);
            }
        }
    }
    return ans;
};