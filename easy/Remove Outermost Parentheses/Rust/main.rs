// Problem: Remove Outermost Parentheses
// Link to the problem: https://leetcode.com/problems/remove-outermost-parentheses/
impl Solution {
    pub fn remove_outer_parentheses(s: String) -> String {
        let t = s.as_bytes();
        let n: usize = t.len();
        let mut x: i32 = 0;
        let mut ans: String = "".to_string();
        for i in 0..n {
            if t[i] == b')' {
                x -= 1;
            }
            if x > 0 {
                ans.push(t[i] as char);
            }
            if t[i] == b'(' {
                x += 1;
            }
        }
        return ans;
    }
}
