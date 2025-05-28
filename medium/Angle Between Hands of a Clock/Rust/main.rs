// Problem: Angle Between Hands of a Clock
// Link to the problem: https://leetcode.com/problems/angle-between-hands-of-a-clock/
impl Solution {
    pub fn angle_clock(hour: i32, minutes: i32) -> f64 {
        let mut hour_angle: f64 = 0.5 * ((hour * 60 + minutes) as f64);
        let mut minute_angle: f64 = 6.0 * (minutes as f64);
        let mut angle: f64 = (hour_angle - minute_angle).abs();
        angle = (360.0 - angle).min(angle);
        return angle;
    }
}
