// Problem: Maximize Sum of Squares of Digits
// Link to the problem: https://leetcode.com/problems/maximize-sum-of-squares-of-digits/
function maxSumOfSquares(num: number, sum: number): string {
    if (sum < 1 || sum > 9 * num) {
        return "";
    }
    const x: number = Math.floor(sum / 9), y: number = sum % 9;
    let ans: string = "9".repeat(x);
    num -= x;
    if (y > 0) {
        ans += String(y);
        num--;
    }
    ans += "0".repeat(num);
    return ans;
};