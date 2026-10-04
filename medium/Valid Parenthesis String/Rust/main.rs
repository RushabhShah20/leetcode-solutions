// Problem: Valid Parenthesis String
// Link to the problem: https://leetcode.com/problems/valid-parenthesis-string/
impl Solution {
    pub fn check_valid_string(s: String) -> bool {
        let n: usize = s.len();
        let mut x: i32 = 0;
        let mut y: i32 = 0;
        let t = s.as_bytes();
        for i in 0..n {
            if (t[i] == b'(' || t[i] == b'*') {
                x += 1;
            } else {
                x -= 1;
            }
            if (t[n - 1 - i] == b')' || t[n - 1 - i] == b'*') {
                y += 1;
            } else {
                y -= 1;
            }
            if (x < 0 || y < 0) {
                return false;
            }
        }
        return true;
    }
}
