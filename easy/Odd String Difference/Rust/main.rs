// Problem: Odd String Difference
// Link to the problem: https://leetcode.com/problems/odd-string-difference/
impl Solution {
    pub fn odd_string(words: Vec<String>) -> String {
        let mut ans: String = String::new();
        let mut diff: Vec<Vec<i32>> = vec![vec![0; words[0].len() - 1]; words.len()];
        for i in 0..words.len() {
            let chars: Vec<char> = words[i].chars().collect();
            for j in 0..chars.len() - 1 {
                diff[i][j] = chars[j + 1] as i32 - chars[j] as i32;
            }
        }
        if diff[1] == diff[2] {
            if diff[0] != diff[1] && diff[0] != diff[2] {
                return words[0].clone();
            }
        }
        for i in 1..diff.len() - 1 {
            if diff[i - 1] == diff[i + 1] {
                if diff[i] != diff[i - 1] && diff[i] != diff[i + 1] {
                    return words[i].clone();
                }
            }
        }
        if diff[words.len() - 3] == diff[words.len() - 2] {
            if diff[words.len() - 1] != diff[words.len() - 2]
                && diff[words.len() - 1] != diff[words.len() - 3]
            {
                return words[words.len() - 1].clone();
            }
        }
        return ans;
    }
}
