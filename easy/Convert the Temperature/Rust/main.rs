// Problem: Convert the Temperature
// Link to the problem: https://leetcode.com/problems/convert-the-temperature/
impl Solution {
    pub fn convert_temperature(celsius: f64) -> Vec<f64> {
        let mut ans: Vec<f64> = vec![0.0;2];
        ans[0] = celsius + 273.15;
        ans[1] = (celsius * 1.8) + 32.0;
        return ans;
    }
}
