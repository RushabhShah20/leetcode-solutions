// Problem: Angle Between Hands of a Clock
// Link to the problem: https://leetcode.com/problems/angle-between-hands-of-a-clock/
function angleClock(hour: number, minutes: number): number {
    let hour_angle: number = 0.5 * (hour * 60 + minutes);
    let minute_angle: number = 6 * minutes;
    let angle: number = Math.abs(hour_angle - minute_angle);
    angle = Math.min(360 - angle, angle);
    return angle;
};