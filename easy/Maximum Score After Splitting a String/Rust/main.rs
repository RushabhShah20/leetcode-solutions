// Problem: Maximum Score After Splitting a String
// Link to the problem: https://leetcode.com/problems/maximum-score-after-splitting-a-string/
impl Solution {
    pub fn max_score(s: String) -> i32 {
        let mut ans: i32 = 0;
        let mut pref: Vec<i32> = vec![0; s.len()];
        if (s.chars().nth(0) == Some('1')) {
            pref[0] = 0;
        } else {
            pref[0] = 1;
        }
        for i in 1..s.len() {
            if (s.chars().nth(i) == Some('1')) {
                pref[i] = pref[i - 1];
            } else {
                pref[i] = pref[i - 1] + 1;
            }
        }
        for i in 0..s.len() - 1 {
            let score: i32 =
                (pref[i] + (((s.len() - i - 1) as i32) - ((pref[s.len() - 1] - pref[i]) as i32)));
            ans = ans.max(score);
        }
        return ans;
    }
}
