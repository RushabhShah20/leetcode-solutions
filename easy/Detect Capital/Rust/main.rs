// Problem: Detect Capital
// Link to the problem: https://leetcode.com/problems/detect-capital/
impl Solution {
    pub fn detect_capital_use(word: String) -> bool {
        let mut all_uppercase: bool = true;
        let mut all_lowercase: bool = true;
        for i in 1..word.len() {
            if word.chars().nth(i).unwrap().is_lowercase() {
                all_uppercase = false;
            }
            if word.chars().nth(i).unwrap().is_uppercase() {
                all_lowercase = false;
            }
        }
        if word.chars().nth(0).unwrap().is_lowercase() && all_lowercase == true {
            return true;
        } else if word.chars().nth(0).unwrap().is_uppercase() && all_uppercase == true {
            return true;
        } else if word.chars().nth(0).unwrap().is_uppercase() && all_lowercase == true {
            return true;
        } else {
            return false;
        }
    }
}
