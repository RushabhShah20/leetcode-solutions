// Problem: Append Characters to String to Make Subsequence
// Link to the problem: https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/
impl Solution {
    pub fn append_characters(s: String, t: String) -> i32 {
        let mut ans: i32 = 0;
        let mut i: usize = 0;
        let mut j: usize = 0;
        let n: usize = s.len();
        let m: usize = t.len();
        let s_bytes = s.as_bytes();
        let t_bytes = t.as_bytes();
        while (i < n && j < m) {
            if (s_bytes[i] == t_bytes[j]) {
                j += 1;
            }
            i += 1;
        }
        ans = (m - j) as i32;
        return ans;
    }
}
