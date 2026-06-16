// Problem: Process String with Special Operations I
// Link to the problem: https://leetcode.com/problems/process-string-with-special-operations-i/
impl Solution {
    pub fn process_str(s: String) -> String {
        let mut ans: Vec<char> = Vec::new();
        for c in s.chars() {
            if c == '*' {
                if !ans.is_empty() {
                    ans.pop();
                }
            } else if c == '#' {
                let snapshot: Vec<char> = ans.clone();
                ans.extend(snapshot);
            } else if c == '%' {
                ans.reverse();
            } else {
                ans.push(c);
            }
        }
        return ans.iter().collect();
    }
}
