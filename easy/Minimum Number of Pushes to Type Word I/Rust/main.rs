// Problem: Minimum Number of Pushes to Type Word I
// Link to the problem: https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-i/
impl Solution {
    pub fn minimum_pushes(word: String) -> i32 {
        let mut ans: i32 = 0;
        let n: i32 = word.len() as i32;
        for i in 0..n {
            if (i < 8) {
                ans += 1;
            } else if (i >= 8 && i < 16) {
                ans += 2;
            } else if (i >= 16 && i < 24) {
                ans += 3;
            } else {
                ans += 4;
            }
        }
        return ans;
    }
}
