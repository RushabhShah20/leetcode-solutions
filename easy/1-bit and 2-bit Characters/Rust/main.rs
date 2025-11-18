// Problem: 1-bit and 2-bit Characters
// Link to the problem: https://leetcode.com/problems/1-bit-and-2-bit-characters/
impl Solution {
    pub fn is_one_bit_character(bits: Vec<i32>) -> bool {
        let n: usize = bits.len();
        let mut i: usize = 0;
        while (i < n - 1) {
            i += (bits[i] + 1) as usize;
        }
        return i == n - 1;
    }
}
