// Problem: Check if Strings Can be Made Equal With Operations I
// Link to the problem: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-i/
impl Solution {
    pub fn can_be_equal(s1: String, s2: String) -> bool {
        let s1_bytes = s1.as_bytes();
        let s2_bytes = s2.as_bytes();
        let x: bool = (s1_bytes[0] == s2_bytes[0] && s1_bytes[2] == s2_bytes[2])
            || (s1_bytes[0] == s2_bytes[2] && s1_bytes[2] == s2_bytes[0]);
        let y: bool = (s1_bytes[1] == s2_bytes[1] && s1_bytes[3] == s2_bytes[3])
            || (s1_bytes[1] == s2_bytes[3] && s1_bytes[3] == s2_bytes[1]);
        let ans: bool = x && y;
        return ans;
    }
}
