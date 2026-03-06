// Problem: Check if Binary String Has at Most One Segment of Ones
// Link to the problem: https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/
impl Solution {
    pub fn check_ones_segment(s: String) -> bool {
        let mut count: i32 = 0;
        let s_bytes = s.as_bytes();
        for i in 1..s.len() {
            if (s_bytes[i] == b'0') {
                count += 1;
            }
            if (s_bytes[i] == b'1' && count != 0) {
                return false;
            }
        }
        return true;
    }
}
