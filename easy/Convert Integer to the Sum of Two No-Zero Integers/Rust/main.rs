// Problem: Convert Integer to the Sum of Two No-Zero Integers
// Link to the problem: https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/
impl Solution {
    pub fn is_non_zero(mut n: i32) -> bool {
        while (n > 0) {
            if (n % 10 == 0) {
                return false;
            }
            n /= 10;
        }
        return true;
    }
    pub fn get_no_zero_integers(n: i32) -> Vec<i32> {
        for i in 1..=n {
            if (Self::is_non_zero(i) && Self::is_non_zero(n - i)) {
                return [i, n - i].to_vec();
            }
        }
        return [].to_vec();
    }
}
