// Problem: Reverse Bits
// Link to the problem: https://leetcode.com/problems/reverse-bits/
impl Solution {
    pub fn reverse_bits(mut n: i32) -> i32 {
        let mut ans: i32 = 0;
        for i in 0..32 {
            ans <<= 1;
            ans |= (n & 1);
            n >>= 1;
        }
        return ans;
    }
}
