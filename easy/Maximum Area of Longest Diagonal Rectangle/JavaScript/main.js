/**
 * @param {number[][]} dimensions
 * @return {number}
 */
var areaOfMaxDiagonal = function (dimensions) {
    let maxDiagonal = -1.0;
    let maxArea = -1;
    for (let i = 0; i < dimensions.length; i++) {
        let l = dimensions[i][0], b = dimensions[i][1];
        let diagonal = Math.sqrt(1.0 * l * l + 1.0 * b * b);
        let area = l * b;
        if (diagonal > maxDiagonal) {
            maxDiagonal = diagonal;
            maxArea = area;
        } else if (diagonal === maxDiagonal) {
            maxArea = Math.max(area, maxArea);
        }
    }
    return maxArea;
};