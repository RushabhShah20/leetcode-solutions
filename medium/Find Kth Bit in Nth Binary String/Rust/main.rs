// Problem: Find Kth Bit in Nth Binary String
// Link to the problem: https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/
impl Solution {
    pub fn find_kth_bit(n: i32, k: i32) -> char {
        if (n == 1) {
            return '0';
        }
        let x: i32 = (1 << n) - 1;
        let m: i32 = x / 2 + 1;
        if (k == m) {
            return '1';
        }
        if (k < m) {
            return Self::find_kth_bit(n - 1, k);
        }
        if (Self::find_kth_bit(n - 1, x - k + 1) == '0') {
            return '1';
        }
        return '0';
    }
}
