// Problem: Number of Employees Who Met the Target
// Link to the problem: https://leetcode.com/problems/number-of-employees-who-met-the-target/
/**
 * @param {number[]} hours
 * @param {number} target
 * @return {number}
 */
var numberOfEmployeesWhoMetTarget = function (hours, target) {
    let ans = 0;
    for (const hour of hours) {
        if (hour >= target) {
            ans++;
        }
    }
    return ans;
};