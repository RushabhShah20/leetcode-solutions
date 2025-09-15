// Problem: Maximum Number of Words You Can Type
// Link to the problem: https://leetcode.com/problems/maximum-number-of-words-you-can-type/
impl Solution {
    pub fn can_be_typed_words(text: String, broken_letters: String) -> i32 {
        let words: Vec<&str> = text.split(' ').collect();
        let mut ans: i32 = words.len() as i32;
        for i in 0..words.len() {
            for j in 0..broken_letters.len() {
                if let Some(ch) = broken_letters.chars().nth(j) {
                    if words[i].contains(ch) {
                        ans -= 1;
                        break;
                    }
                }
            }
        }
        return ans;
    }
}
