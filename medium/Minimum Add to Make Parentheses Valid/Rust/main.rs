// Problem: Minimum Add to Make Parentheses Valid
// Link to the problem: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
impl Solution {
    pub fn min_add_to_make_valid(s: String) -> i32 {
        let n: usize = s.len();
        let mut x: i32 = 0;
        let mut y: i32 = 0;
        let t = s.as_bytes();
        for i in 0..n {
            if (t[i] == b'(') {
                x += 1;
            } else {
                if (x > 0) {
                    x -= 1;
                } else {
                    y += 1;
                }
            }
        }
        let ans: i32 = x + y;
        return ans;
    }
}
