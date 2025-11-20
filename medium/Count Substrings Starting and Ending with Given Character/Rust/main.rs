// Problem: Count Substrings Starting and Ending with Given Character
// Link to the problem: https://leetcode.com/problems/count-substrings-starting-and-ending-with-given-character/
impl Solution {
    pub fn count_substrings(s: String, c: char) -> i64 {
        let mut m: i64 = 0;
        for ch in s.chars() {
            if (ch == c) {
                m += 1;
            }
        }
        let ans: i64 = (m * (m + 1)) / 2;
        return ans;
    }
}
