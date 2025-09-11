// Problem: Sort Vowels in a String
// Link to the problem: https://leetcode.com/problems/sort-vowels-in-a-string/
impl Solution {
    pub fn sort_vowels(s: String) -> String {
        let mut indices: Vec<i32> = Vec::new();
        let mut alphabets: Vec<char> = Vec::new();
        let chars: Vec<char> = s.chars().collect();
        for (i, &ch) in chars.iter().enumerate() {
            if ch == 'a'
                || ch == 'e'
                || ch == 'i'
                || ch == 'o'
                || ch == 'u'
                || ch == 'A'
                || ch == 'E'
                || ch == 'I'
                || ch == 'O'
                || ch == 'U'
            {
                indices.push(i as i32);
                alphabets.push(ch);
            }
        }
        alphabets.sort();
        let mut t: Vec<char> = s.chars().collect();
        for i in 0..indices.len() {
            t[indices[i] as usize] = alphabets[i];
        }
        return t.iter().collect();
    }
}
