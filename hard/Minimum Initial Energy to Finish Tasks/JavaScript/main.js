// Problem: Minimum Initial Energy to Finish Tasks
// Link to the problem: https://leetcode.com/problems/minimum-initial-energy-to-finish-tasks/
/**
 * @param {number[][]} tasks
 * @return {number}
 */
var minimumEffort = function (tasks) {
    tasks.sort((a, b) => (a[1] - a[0]) - (b[1] - b[0]));
    let ans = 0;
    for (const task of tasks) {
        ans = Math.max(ans + task[0], task[1]);
    }
    return ans;
};