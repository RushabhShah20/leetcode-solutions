// Problem: Pow(x, n)
// Link to the problem: https://leetcode.com/problems/powx-n/
impl Solution {
    pub fn my_pow(x: f64, n: i32) -> f64 {
        let mut t: i64 = n.into();
        let mut y: f64 = x;
        if n == 0 {
            return 1.0;
        }
        if (t < 0) {
            t = -1 * t;
            y = 1.0 / y;
        }
        if n % 2 == 0 {
            return Self::my_pow(y * y, (t / 2) as i32);
        } else {
            return y * Self::my_pow(y, (t - 1) as i32);
        }
    }
}
