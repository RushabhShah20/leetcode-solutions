// Problem: Concatenate Non-Zero Digits and Multiply by Sum I
// Link to the problem: https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/
impl Solution {
    pub fn sum_and_multiply(mut n: i32) -> i64 {
        let mut x: i64 = 0;
        let mut y: i64 = 0;
        let mut a: i64 = 1;
        while (n > 0) {
            let z: i64 = (n as i64) % 10;
            n /= 10;
            if (z == 0) {
                continue;
            }
            x = z * a + x;
            y += z;
            a *= 10;
        }
        let ans: i64 = x * y;
        return ans;
    }
}
