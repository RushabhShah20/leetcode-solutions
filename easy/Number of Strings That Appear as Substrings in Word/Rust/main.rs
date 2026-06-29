// Problem: Number of Strings That Appear as Substrings in Word
// Link to the problem: https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/
impl Solution {
    pub fn num_of_strings(patterns: Vec<String>, word: String) -> i32 {
        let n: usize = patterns.len();
        let mut ans: i32 = 0;
        for i in 0..n {
            if word.contains(patterns[i].as_str()) {
                ans += 1;
            }
        }
        return ans;
    }
}
