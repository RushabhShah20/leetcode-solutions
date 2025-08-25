// Problem: GCD of Odd and Even Sums
// Link to the problem: https://leetcode.com/problems/gcd-of-odd-and-even-sums/
impl Solution {
    pub fn gcd(a: i32, b: i32) -> i32 {
        if b == 0 {
            return a;
        } else {
            return Self::gcd(b, a % b);
        }
    }
    pub fn gcd_of_odd_even_sums(n: i32) -> i32 {
        return Self::gcd((n) * (n + 1), n.pow(2));
    }
}
