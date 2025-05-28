// Problem: Angle Between Hands of a Clock
// Link to the problem: https://leetcode.com/problems/angle-between-hands-of-a-clock/
/**
 * @param {number} hour
 * @param {number} minutes
 * @return {number}
 */
var angleClock = function (hour, minutes) {
    let hour_angle = 0.5 * (hour * 60 + minutes);
    let minute_angle = 6 * minutes;
    let angle = Math.abs(hour_angle - minute_angle);
    angle = Math.min(360 - angle, angle);
    return angle;
};
