// Problem: Longest Valid Parentheses
// Link to the problem: https://leetcode.com/problems/longest-valid-parentheses/
impl Solution {
    pub fn longest_valid_parentheses(s: String) -> i32 {
        let n: usize = s.len();
        let mut ans: i32 = 0;
        let mut x: i32 = 0;
        let mut y: i32 = 0;
        let t = s.as_bytes();
        for i in 0..n {
            if (t[i] == b'(') {
                x += 1;
            } else {
                y += 1;
            }
            if (x == y) {
                ans = ans.max(x + y);
            } else if (y > x) {
                x = 0;
                y = 0;
            }
        }
        x = 0;
        y = 0;
        for i in (0..n).rev() {
            if (t[i] == b'(') {
                x += 1;
            } else {
                y += 1;
            }
            if (x == y) {
                ans = ans.max(x + y);
            } else if (x > y) {
                x = 0;
                y = 0;
            }
        }
        return ans;
    }
}
