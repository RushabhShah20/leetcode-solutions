// Problem: Angle Between Hands of a Clock
// Link to the problem: https://leetcode.com/problems/angle-between-hands-of-a-clock/
impl Solution {
    pub fn angle_clock(hour: i32, minutes: i32) -> f64 {
        let x: f64 = 0.5 * ((hour * 60 + minutes) as f64);
        let y: f64 = 6.0 * (minutes as f64);
        let z: f64 = (x - y).abs();
        let ans: f64 = (360.0 - z).min(z);
        return ans;
    }
}
