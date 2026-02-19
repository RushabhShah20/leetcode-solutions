// Problem: Count Binary Substrings
// Link to the problem: https://leetcode.com/problems/count-binary-substrings/
impl Solution {
    pub fn count_binary_substrings(s: String) -> i32 {
        let n: usize = s.len();
        let mut ans: i32 = 0;
        let mut prev: i32 = 0;
        let mut curr: i32 = 1;
        let s_bytes = s.as_bytes();
        for i in 1..n {
            if (s_bytes[i - 1] != s_bytes[i]) {
                ans += prev.min(curr);
                prev = curr;
                curr = 1;
            } else {
                curr += 1;
            }
        }
        ans += prev.min(curr);
        return ans;
    }
}
