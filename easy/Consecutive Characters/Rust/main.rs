// Problem: Consecutive Characters
// Link to the problem: https://leetcode.com/problems/consecutive-characters/
impl Solution {
    pub fn max_power(s: String) -> i32 {
        let mut ans: i32 = 1;
        let mut count: i32 = 1;
        for i in 0..s.len() - 1 {
            if (s.chars().nth(i) == s.chars().nth(i + 1)) {
                count += 1;
                ans = ans.max(count);
            } else {
                count = 1;
            }
        }
        return ans;
    }
}
