// Problem: Angle Between Hands of a Clock
// Link to the problem: https://leetcode.com/problems/angle-between-hands-of-a-clock/
function angleClock(hour: number, minutes: number): number {
    const x: number = 0.5 * (hour * 60 + minutes);
    const y: number = 6 * minutes;
    const z: number = Math.abs(x - y);
    const ans: number = Math.min(360 - z, z);
    return ans;
};