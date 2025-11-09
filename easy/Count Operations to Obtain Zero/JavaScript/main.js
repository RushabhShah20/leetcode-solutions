// Problem: Count Operations to Obtain Zero
// Link to the problem: https://leetcode.com/problems/count-operations-to-obtain-zero/
/**
 * @param {number} num1
 * @param {number} num2
 * @return {number}
 */
var countOperations = function (num1, num2) {
    let ans = 0, a = Math.max(num1, num2), b = Math.min(num1, num2);
    while (a > 0 && b > 0) {
        ans += Math.floor(a / b);
        a %= b;
        let temp = a;
        a = b;
        b = temp;
    }
    return ans;
};