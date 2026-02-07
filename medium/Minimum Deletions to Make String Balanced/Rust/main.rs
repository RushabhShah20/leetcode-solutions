// Problem: Minimum Deletions to Make String Balanced
// Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/
impl Solution {
    pub fn minimum_deletions(s: String) -> i32 {
        let mut ans: i32 = 0;
        let mut count: i32 = 0;
        for c in s.chars() {
            if (c == 'b') {
                count += 1;
            } else {
                ans = count.min(ans + 1);
            }
        }
        return ans;
    }
}
