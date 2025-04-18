// Problem: Score of a String
// Link to the problem: https://leetcode.com/problems/score-of-a-string/
impl Solution {
    pub fn score_of_string(s: String) -> i32 {
        let mut ans: i32 = 0;
        for i in 0..s.chars().count() - 1 {
            ans += (((s.chars().nth(i).unwrap() as u32) as i32)
                - ((s.chars().nth(i + 1).unwrap() as u32) as i32))
                .abs();
        }
        return ans;
    }
}
