// Problem: Divisible and Non-divisible Sums Difference
// Link to the problem: https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/
impl Solution {
    pub fn difference_of_sums(n: i32, m: i32) -> i32 {
        let mut suma: i32 = 0;
        let mut sumb: i32 = 0;
        for i in 1..=n {
            if (i % m == 0) {
                sumb += i;
            } else {
                suma += i;
            }
        }
        return suma - sumb;
    }
}
