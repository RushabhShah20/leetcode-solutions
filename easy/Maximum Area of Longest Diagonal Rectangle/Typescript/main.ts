// Problem: Maximum Area of Longest Diagonal Rectangle
// Link to the problem: https://leetcode.com/problems/maximum-area-of-longest-diagonal-rectangle/
function areaOfMaxDiagonal(dimensions: number[][]): number {
    let maxDiagonal: number = -1.0;
    let maxArea: number = -1;
    for (let i = 0; i < dimensions.length; i++) {
        let l: number = dimensions[i][0], b: number = dimensions[i][1];
        let diagonal: number = Math.sqrt(1.0 * l * l + 1.0 * b * b);
        let area: number = l * b;
        if (diagonal > maxDiagonal) {
            maxDiagonal = diagonal;
            maxArea = area;
        } else if (diagonal === maxDiagonal) {
            maxArea = Math.max(area, maxArea);
        }
    }
    return maxArea;
};