// Problem: Type of Triangle
// Link to the problem: https://leetcode.com/problems/type-of-triangle/
function triangleType(nums: number[]): string {
    let a: number = nums[0], b: number = nums[1], c: number = nums[2];
    if (a + b > c && b + c > a && c + a > b) {
        if (a === b && b === c && c === a) {
            return "equilateral";
        }
        else if (a === b || b === c || c === a) {
            return "isosceles";
        }
        else {
            return "scalene";
        }
    }
    return "none";
};