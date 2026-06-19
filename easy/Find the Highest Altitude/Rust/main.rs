// Problem: Find the Highest Altitude
// Link to the problem: https://leetcode.com/problems/find-the-highest-altitude/
impl Solution {
    pub fn largest_altitude(gain: Vec<i32>) -> i32 {
        let n: usize = gain.len();
        let mut ans: i32 = 0;
        let mut x: i32 = 0;
        for i in 0..n {
            x += gain[i];
            ans = ans.max(x);
        }
        return ans;
    }
}
