// Problem: Check if All A's Appears Before All B's
// Link to the problem: https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/
impl Solution {
    pub fn check_string(s: String) -> bool {
        let mut ans: bool = true;
        let mut count: i32 = 0;
        for i in 0..s.len() {
            if s.chars().nth(i).unwrap() == 'b' {
                ans = true;
                count = 1;
            }
            if s.chars().nth(i).unwrap() == 'a' && count == 1 {
                ans = false;
                break;
            }
        }
        return ans;
    }
}
