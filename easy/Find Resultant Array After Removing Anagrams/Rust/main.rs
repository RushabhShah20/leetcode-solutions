// Problem: Find Resultant Array After Removing Anagrams
// Link to the problem: https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/
impl Solution {
    pub fn compare(str1: String, str2: String) -> bool {
        let mut charArray1: Vec<char> = str1.chars().collect();
        charArray1.sort();
        let char1: String = charArray1.into_iter().collect();
        let mut charArray2: Vec<char> = str2.chars().collect();
        charArray2.sort();
        let char2: String = charArray2.into_iter().collect();
        return char1 == char2;
    }
    pub fn remove_anagrams(mut words: Vec<String>) -> Vec<String> {
        let mut a: usize = 0;
        let mut v: Vec<String> = Vec::new();
        for i in 1..words.len() {
            if (Self::compare(words[a].clone(), words[i].clone())) {
                words[i] = "1".to_string();
            } else {
                a = i;
            }
        }
        for i in 0..words.len() {
            if (words[i] != "1".to_string()) {
                v.push(words[i].clone());
            }
        }
        return v;
    }
}
