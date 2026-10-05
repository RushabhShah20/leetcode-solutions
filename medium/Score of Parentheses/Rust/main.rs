// Problem: Score of Parentheses
// Link to the problem: https://leetcode.com/problems/score-of-parentheses/
impl Solution {
    pub fn score_of_parentheses(s: String) -> i32 {
        let n: usize = s.len();
        let mut ans: i32 = 0;
        let mut x: i32 = 0;
        let t = s.as_bytes();
        for i in 0..n {
            if (t[i] == b'(') {
                x += 1;
            } else {
                x -= 1;
                if (t[i - 1] == b'(') {
                    ans += 1 << x;
                }
            }
        }
        return ans;
    }
}
