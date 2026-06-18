// Problem: Angle Between Hands of a Clock
// Link to the problem: https://leetcode.com/problems/angle-between-hands-of-a-clock/
/**
 * @param {number} hour
 * @param {number} minutes
 * @return {number}
 */
var angleClock = function (hour, minutes) {
    const x = 0.5 * (hour * 60 + minutes);
    const y = 6 * minutes;
    const z = Math.abs(x - y);
    const ans = Math.min(360 - z, z);
    return ans;
};
