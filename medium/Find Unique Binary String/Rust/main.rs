// Problem: Find Unique Binary String
// Link to the problem: https://leetcode.com/problems/find-unique-binary-string/
impl Solution {
    pub fn find_different_binary_string(nums: Vec<String>) -> String {
        return nums
            .iter()
            .enumerate()
            .map(|(i, s)| if s.as_bytes()[i] == b'0' { '1' } else { '0' })
            .collect();
    }
}
