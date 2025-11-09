// Problem: Count Operations to Obtain Zero
// Link to the problem: https://leetcode.com/problems/count-operations-to-obtain-zero/
function countOperations(num1: number, num2: number): number {
    let ans: number = 0, a: number = Math.max(num1, num2), b: number = Math.min(num1, num2);
    while (a > 0 && b > 0) {
        ans += Math.floor(a / b);
        a %= b;
        let temp: number = a;
        a = b;
        b = temp;
    }
    return ans;
};