// Problem: Maximum Nesting Depth of Two Valid Parentheses Strings
// Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/
impl Solution {
    pub fn max_depth_after_split(seq: String) -> Vec<i32> {
        let n: usize = seq.len();
        let s = seq.as_bytes();
        let mut ans: Vec<i32> = vec![0; n];
        for i in 0..n {
            ans[i] = (i as i32 & 1) ^ (if s[i] == b'(' { 1 } else { 0 });
        }
        return ans;
    }
}
