// Problem: Longest Uncommon Subsequence I
// Link to the problem: https://leetcode.com/problems/longest-uncommon-subsequence-i/
impl Solution {
    pub fn find_lu_slength(a: String, b: String) -> i32 {
        if (a == b) {
            return -1;
        } else {
            return a.len().max(b.len()) as i32;
        }
    }
}
