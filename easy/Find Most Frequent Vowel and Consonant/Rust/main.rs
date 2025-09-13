// Problem: Find Most Frequent Vowel And Consonant
// Link to the problem: https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/
impl Solution {
    pub fn max_freq_sum(s: String) -> i32 {
        let mut vowels: std::collections::HashMap<char, i32> = std::collections::HashMap::new();
        let mut consonents: std::collections::HashMap<char, i32> = std::collections::HashMap::new();
        for ch in s.chars() {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                *vowels.entry(ch).or_insert(0) += 1;
            } else {
                *consonents.entry(ch).or_insert(0) += 1;
            }
        }
        let mut max_vowels: i32 = 0;
        let mut max_consonents: i32 = 0;
        for (key, value) in &vowels {
            if (*value > max_vowels) {
                max_vowels = *value;
            }
        }
        for (key, value) in &consonents {
            if (*value > max_consonents) {
                max_consonents = *value;
            }
        }
        return max_vowels + max_consonents;
    }
}
