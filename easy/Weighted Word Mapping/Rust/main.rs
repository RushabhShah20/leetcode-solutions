// Problem: Weighted Word Mapping
// Link to the problem: https://leetcode.com/problems/weighted-word-mapping/
impl Solution {
    pub fn map_word_weights(words: Vec<String>, weights: Vec<i32>) -> String {
        let mut ans: String = String::new();
        for word in &words {
            let sum: i32 = word
                .chars()
                .map(|ch| weights[(ch as i32 - 'a' as i32) as usize])
                .sum();
            ans.push(char::from_u32('z' as u32 - (sum % 26) as u32).unwrap());
        }
        return ans;
    }
}
