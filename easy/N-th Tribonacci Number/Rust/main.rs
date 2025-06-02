// Problem: N-th Tribonacci Number
// Link to the problem: https://leetcode.com/problems/n-th-tribonacci-number/
impl Solution {
    pub fn tribonacci(mut n: i32) -> i32 {
        if (n < 2) {
            return n;
        }
        let mut a: i32 = 0;
        let mut b: i32 = 1;
        let mut c: i32 = 1;
        let mut d: i32;
        while (n > 2) {
            d = a + b + c;
            a = b;
            b = c;
            c = d;
            n -= 1;
        }
        return c;
    }
}
