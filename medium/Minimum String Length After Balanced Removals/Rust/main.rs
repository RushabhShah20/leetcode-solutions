// Problem: Minimum String Length After Balanced Removals
// Link to the problem: https://leetcode.com/problems/minimum-string-length-after-balanced-removals/
impl Solution {
    pub fn min_length_after_removals(s: String) -> i32 {
        let mut ans: i32 = 0;
        for c in s.chars() {
            if (c == 'a') {
                ans += 1;
            } else {
                ans -= 1;
            }
        }
        return ans.abs();
    }
}
