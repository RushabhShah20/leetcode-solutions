// Problem: Sum of Two Integers
// Link to the problem: https://leetcode.com/problems/sum-of-two-integers/
impl Solution {
    pub fn get_sum(a: i32, b: i32) -> i32 {
        let mut x: i32 = a;
        let mut y: i32 = b;
        while (y != 0) {
            let z: i32 = (x & y) << 1;
            x = x ^ y;
            y = z;
        }
        return x;
    }
}
