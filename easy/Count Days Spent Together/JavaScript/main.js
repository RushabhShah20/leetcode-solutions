// Problem: Count Days Spent Together
// Link to the problem: https://leetcode.com/problems/count-days-spent-together/
/**
 * @param {string} arriveAlice
 * @param {string} leaveAlice
 * @param {string} arriveBob
 * @param {string} leaveBob
 * @return {number}
 */
var dayOfTheYear = function (date, a) {
    const x = parseInt(date.substring(0, 2)), y = parseInt(date.substring(3, 5));
    const ans = a[x - 1] + y;
    return ans;
}
var countDaysTogether = function (arriveAlice, leaveAlice, arriveBob, leaveBob) {
    const x = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
    let y = new Array(13).fill(0);
    for (let i = 1; i < 13; i++) {
        y[i] = y[i - 1] + x[i - 1];
    }
    const a = dayOfTheYear(arriveAlice, y), b = dayOfTheYear(leaveAlice, y), c = dayOfTheYear(arriveBob, y), d = dayOfTheYear(leaveBob, y);
    const ans = Math.max(0, Math.min(b, d) - Math.max(a, c) + 1);
    return ans;
};