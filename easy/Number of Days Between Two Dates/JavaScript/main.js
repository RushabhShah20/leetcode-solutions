// Problem: Number of Days Between Two Dates
// Link to the problem: https://leetcode.com/problems/number-of-days-between-two-dates/
/**
 * @param {string} date1
 * @param {string} date2
 * @return {number}
 */
var dayOfYear = function (date) {
    let day = parseInt(date.substr(8, 2));
    let month = parseInt(date.substr(5, 2));
    let year = parseInt(date.substr(0, 4));
    let ans = 0;
    for (let i = 1971; i < year; i++) {
        if (i % 4 === 0 && (i % 100 !== 0 || i % 400 === 0)) {
            ans += 366;
        }
        else {
            ans += 365;
        }
    }
    if (year % 4 === 0 && (year % 100 !== 0 || year % 400 === 0)) {
        let months = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
        for (let i = 0; i < month - 1; i++) {
            ans += months[i];
        }
    }
    else {
        let months = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
        for (let i = 0; i < month - 1; i++) {
            ans += months[i];
        }
    }
    ans += day;
    return ans;
};
var daysBetweenDates = function (date1, date2) {
    let x = dayOfYear(date1), y = dayOfYear(date2);
    return Math.abs(x - y);
};