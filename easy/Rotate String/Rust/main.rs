// Problem: Rotate String
// Link to the problem: https://leetcode.com/problems/rotate-string/
impl Solution {
    pub fn rotate_string(s: String, goal: String) -> bool {
        if s.len() != goal.len() {
            return false;
        } else {
            let t: String = s.clone() + &s;
            let ans: bool = t.contains(&goal);
            return ans;
        }
    }
}
