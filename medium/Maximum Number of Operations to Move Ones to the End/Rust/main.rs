// Problem: Maximum Number of Operations to Move Ones to the End
// Link to the problem: https://leetcode.com/problems/maximum-number-of-operations-to-move-ones-to-the-end/
impl Solution {
    pub fn max_operations(s: String) -> i32 {
        let mut ans: i32 = 0;
        let n: usize = s.len();
        let mut ones: i32 = 0;
        let s_bytes = s.as_bytes();
        for i in 0..n {
            if (s_bytes[i] == b'1') {
                ones += 1;
            } else if (i > 0 && s_bytes[i - 1] == b'1') {
                ans += ones;
            }
        }
        return ans;
    }
}
