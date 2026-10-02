// Problem: Generate Parentheses
// Link to the problem: https://leetcode.com/problems/generate-parentheses/
impl Solution {
    pub fn generate_parenthesis(n: i32) -> Vec<String> {
        if (n == 0) {
            return vec![String::new()];
        }
        let mut ans: Vec<String> = Vec::new();
        for i in 0..n {
            let l: Vec<String> = Self::generate_parenthesis(i);
            let r: Vec<String> = Self::generate_parenthesis(n - 1 - i);
            for j in 0..l.len() {
                for k in 0..r.len() {
                    ans.push(format!("({}){}", l[j], r[k]));
                }
            }
        }
        return ans;
    }
}
