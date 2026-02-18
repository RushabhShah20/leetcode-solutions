// Problem: Binary Number with Alternating Bits
// Link to the problem: https://leetcode.com/problems/binary-number-with-alternating-bits/
impl Solution {
    pub fn toBinary(mut n: i32) -> Vec<i32> {
        let mut ans: Vec<i32> = Vec::new();
        while (n > 0) {
            ans.push(n % 2);
            n /= 2;
        }
        ans.reverse();
        return ans;
    }
    pub fn isAlternating(ans: Vec<i32>) -> bool {
        for i in 0..ans.len() {
            if (i % 2 == 0) {
                if (ans[i] == 0) {
                    return false;
                }
            } else {
                if (ans[i] == 1) {
                    return false;
                }
            }
        }
        return true;
    }
    pub fn has_alternating_bits(n: i32) -> bool {
        let ans: Vec<i32> = Self::toBinary(n);
        return Self::isAlternating(ans);
    }
}
