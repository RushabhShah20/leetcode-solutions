// Problem: Valid Perfect Square
// Link to the problem: https://leetcode.com/problems/valid-perfect-square/
function isPerfectSquare(num: number): boolean {
    let s: number = 1,
        e: number = num;
    while (s <= e) {
        let mid: number = (s + (e - s) / 2) >> 0;
        if (mid * mid === num) {
            return true;
        } else if (mid * mid > num) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return false;
};