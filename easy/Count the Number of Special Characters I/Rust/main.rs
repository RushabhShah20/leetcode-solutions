// Problem: Count the Number of Special Characters I
// Link to the problem: https://leetcode.com/problems/count-the-number-of-special-characters-i/
impl Solution {
    pub fn number_of_special_chars(word: String) -> i32 {
        let mut lower: Vec<i32> = vec![0; 26];
        let mut upper: Vec<i32> = vec![0; 26];
        let mut ans: i32 = 0;
        for c in word.chars() {
            if c.is_lowercase() {
                lower[c as usize - 'a' as usize] += 1;
            } else {
                upper[c as usize - 'A' as usize] += 1;
            }
        }
        for i in 0..26 {
            if lower[i] > 0 && upper[i] > 0 {
                ans += 1;
            }
        }
        return ans;
    }
}
