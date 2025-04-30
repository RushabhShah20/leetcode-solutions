// Problem: Convert Date to Binary
// Link to the problem: https://leetcode.com/problems/convert-date-to-binary/
/**
 * @param {string} date
 * @return {string}
 */
var toBinary = function (n) {
    let ans = 0;
    let i = 1;
    while (n > 0) {
        let rem = n % 2;
        ans += rem * i;
        n = n / 2 >> 0;
        i *= 10;
    }
    return ans;
}
var convertDateToBinary = function (date) {
    let yyyy = date.substring(0, 4);
    let mm = date.substring(5, 7);
    let dd = date.substring(8, 10);
    let y = toBinary(parseInt(yyyy));
    let m = toBinary(parseInt(mm));
    let d = toBinary(parseInt(dd));
    let ans = y.toString() + "-" + m.toString() + "-" + d.toString();
    return ans;
};