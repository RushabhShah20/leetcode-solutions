// Problem: Find Greatest Common Divisor of Array
// Link to the problem: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
function gcd(a: number, b: number): number {
    return b === 0 ? a : gcd(b, a % b);
}
function findGCD(nums: number[]): number {
    let maxVal: number = 0, minVal: number = 1001;
    for (const num of nums) {
        maxVal = Math.max(maxVal, num);
        minVal = Math.min(minVal, num);
    }
    const ans: number = gcd(maxVal, minVal);
    return ans;
};