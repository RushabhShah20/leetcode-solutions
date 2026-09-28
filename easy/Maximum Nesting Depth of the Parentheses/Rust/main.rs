// Problem: Maximum Nesting Depth of the Parentheses
// Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
impl Solution {
    pub fn max_depth(s: String) -> i32 {
        let n: usize = s.len();
        let mut ans: i32 = 0;
        let mut x: i32 = 0;
        let t = s.as_bytes();
        for i in 0..n {
            if (t[i] == b'(') {
                x += 1;
            }
            if (t[i] == b')') {
                x -= 1;
            }
            ans = ans.max(x);
        }
        return ans;
    }
}
