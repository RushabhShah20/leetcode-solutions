// Problem: Number of Days Between Two Dates
// Link to the problem: https://leetcode.com/problems/number-of-days-between-two-dates/
function dayOfYear(date: string): number {
    let day: number = parseInt(date.substr(8, 2));
    let month: number = parseInt(date.substr(5, 2));
    let year: number = parseInt(date.substr(0, 4));
    let ans: number = 0;
    for (let i = 1971; i < year; i++) {
        if (i % 4 === 0 && (i % 100 !== 0 || i % 400 === 0)) {
            ans += 366;
        }
        else {
            ans += 365;
        }
    }
    if (year % 4 === 0 && (year % 100 !== 0 || year % 400 === 0)) {
        let months: number[] = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
        for (let i = 0; i < month - 1; i++) {
            ans += months[i];
        }
    }
    else {
        let months: number[] = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
        for (let i = 0; i < month - 1; i++) {
            ans += months[i];
        }
    }
    ans += day;
    return ans;
}
function daysBetweenDates(date1: string, date2: string): number {
    let x = dayOfYear(date1), y = dayOfYear(date2);
    return Math.abs(x - y);
};