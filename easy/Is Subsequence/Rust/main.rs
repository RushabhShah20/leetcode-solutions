// Problem: Is Subsequence
// Link to the problem: https://leetcode.com/problems/is-subsequence/
impl Solution {
    pub fn is_subsequence(s: String, t: String) -> bool {
        let n: usize = t.len();
        let m: usize = s.len();
        let mut i: usize = 0;
        let mut j: usize = 0;
        while (i < n && j < m) {
            if (t.chars().nth(i) == s.chars().nth(j)) {
                j += 1;
            }
            i += 1;
        }
        if (j < m) {
            return false;
        } else {
            return true;
        }
    }
}
