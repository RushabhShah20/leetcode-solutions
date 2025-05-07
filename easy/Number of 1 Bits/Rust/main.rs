// Problem: Number of 1 Bits
// Link to the problem: https://leetcode.com/problems/number-of-1-bits/
impl Solution {
    pub fn hamming_weight(n: i32) -> i32 {
        let mut num: i32 = n;
        let mut ans: i32 = 0;
        while num != 0 {
            num &= (num - 1);
            ans += 1;
        }
        return ans;
    }
}
