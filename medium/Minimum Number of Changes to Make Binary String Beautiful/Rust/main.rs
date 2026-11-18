// Problem: Minimum Number of Changes to Make Binary String Beautiful
// Link to the problem: https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/
impl Solution {
    pub fn min_changes(s: String) -> i32 {
        let n: usize = s.len();
        let t: &[u8] = s.as_bytes();
        let mut ans: i32 = 0;
        for i in (1..n).step_by(2) {
            if (t[i] != t[i - 1]) {
                ans += 1;
            }
        }
        return ans;
    }
}
