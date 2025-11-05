// Problem: Longest Unequal Adjacent Groups Subsequence I
// Link to the problem: https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i/
impl Solution {
    pub fn get_longest_subsequence(words: Vec<String>, groups: Vec<i32>) -> Vec<String> {
        let n: usize = groups.len();
        let mut ans: Vec<String> = Vec::new();
        ans.push(words[0].clone());
        for i in 1..n {
            if (groups[i] != groups[i - 1]) {
                ans.push(words[i].clone());
            }
        }
        return ans;
    }
}
