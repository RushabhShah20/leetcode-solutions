// Problem: Number of Employees Who Met the Target
// Link to the problem: https://leetcode.com/problems/number-of-employees-who-met-the-target/
function numberOfEmployeesWhoMetTarget(hours: number[], target: number): number {
    let ans: number = 0;
    for (const hour of hours) {
        if (hour >= target) {
            ans++;
        }
    }
    return ans;
};